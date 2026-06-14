/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 21:52:20 by sgovinda          #+#    #+#             */
/*   Updated: 2026/06/14 21:54:29 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char	*str)
{
	const char	*str2;

	str2 = str;
	while (*str2)
		str2++;
	return (str2 - str);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	char		*d;
	const char	*s;
	size_t		srclen;

	d = dst;
	s = src;
	srclen = 0;
	while (*s)
	{
		srclen++;
		s++;
	}
	if (dsize != 0)
	{
		while (dsize - 1 > 0 && *src != '\0')
		{
			*d = *src;
			d++;
			src++;
			dsize--;
		}
		*d = '\0';
	}
	return (srclen);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	char		*d;
	const char	*s;
	size_t		dstlen;
	size_t		n;

	d = dst;
	s = src;
	dstlen = 0;
	while (dsize > dstlen && *d != '\0')
	{
		dstlen++;
		d++;
	}
	if (dstlen >= dsize)
		return (dsize + ft_strlen(src));
	n = dsize - dstlen - 1;
	while (n > 0 && *s != '\0')
	{
		*d++ = *s++;
		n--;
	}
	if (dsize > 0)
		*d = '\0';
	return (dstlen + ft_strlen(src));
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	len;
	size_t	i;

	len = 0;
	while (s[len])
		len++;
	copy = malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
