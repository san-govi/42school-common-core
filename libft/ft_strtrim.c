/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 23:48:24 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/01 01:10:14 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*newstring;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
		
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;

	end = ft_strlen(s1);
		while (end > start && ft_strchr(set, s1[end - 1]))
			end--;
		len = end - start;

	newstring = malloc(len + 1);
	if (!newstring)
		return (NULL);

	ft_strlcpy(newstring, s1 + start, len + 1);
	return (newstring);
}
