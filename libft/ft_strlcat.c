/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 00:42:16 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/01 14:31:16 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	char	*d;
	size_t	dstlen;
	size_t	n;

	d = dst;
	dstlen = 0;
	while (dsize > dstlen && *d != '\0')
	{
		dstlen++;
		d++;
	}
	if (dstlen == dsize)
		return (dsize + ft_strlen(src));
	n = dsize - dstlen - 1;
	while (n > 0 && *src != '\0')
	{
		*d++ = *src++;
		n--;
	}
	*d = '\0';
	return (dstlen + ft_strlen(src));
}
