/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 21:27:44 by sgovinda          #+#    #+#             */
/*   Updated: 2026/06/14 22:10:31 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin_gnl(char *s1, char const *s2)
{
	char	*newstring;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1)
	{
		s1 = malloc(1 * sizeof(char));
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}
	if (!s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	newstring = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!newstring)
	{
		free (s1);
		return (NULL);
	}
	ft_strlcpy(newstring, s1, s1_len + s2_len + 1);
	ft_strlcat(newstring, s2, s1_len + s2_len + 1);
	free(s1);
	return (newstring);
}

char	*read_file(int fd, char *read_section)
{
	char		temp_read[BUFFER_SIZE + 1];
	ssize_t		read_bytes;

	read_bytes = 1;
	while (read_bytes > 0)
	{
		read_bytes = read(fd, temp_read, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(read_section);
			return (NULL);
		}
		if (read_bytes == 0)
			break ;
		temp_read[read_bytes] = '\0';
		read_section = ft_strjoin_gnl(read_section, temp_read);
		if (ft_strchr(read_section, '\n'))
			break ;
	}
	if (!read_section || read_section[0] == '\0')
	{
		free (read_section);
		return (NULL);
	}
	return (read_section);
}

char	*clean_up(char	*read_section, int len)
{
	char	*temp;

	temp = ft_strdup(read_section + len);
	if (!temp)
	{
		free(read_section);
		return (NULL);
	}
	free (read_section);
	read_section = temp;
	return (read_section);
}

char	*get_next_line(int fd)
{
	static char	*read_section;	
	int			len;
	char		*next_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	read_section = read_file(fd, read_section);
	if (!read_section)
		return (NULL);
	len = 0;
	while (read_section[len] != '\n' && read_section[len] != '\0')
		len++;
	if (read_section[len] == '\n')
		len++;
	next_line = malloc((len + 1) * sizeof(char));
	if (!next_line)
		return (NULL);
	ft_strlcpy(next_line, read_section, len + 1);
	read_section = clean_up(read_section, len);
	return (next_line);
}
