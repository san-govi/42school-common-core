/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 00:00:20 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/01 15:50:28 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
