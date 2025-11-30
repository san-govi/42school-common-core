/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 22:22:07 by sgovinda          #+#    #+#             */
/*   Updated: 2025/11/30 22:52:33 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;
	size_t	i;
	
	if (!s)
	{
		return (NULL);
	}
	slen = 0;
	while (s[slen])
	{
		slen++;
	}
	if (start >= slen)
	{
		len = 0;
	}
	if (len > slen - start)
	{
		len = slen - start;
	}
	substr = malloc(sizeof(char)*(len + 1));
	if (!substr)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}