/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 00:42:16 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/06 16:08:57 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strlcat - Appends the NUL-terminated string src to the end of dst.
 * At most dsize-1 characters will be copied.
 * Always NULL-terminates (unless dsize == 0).
 * Returns the initial length of dst plus the length of src.
 *
 * @param dst: The destination buffer.
 * @param src: The source string to append.
 * @param dsize: The total size of the destination buffer.
 * @return: The length of the string it tried to create 
 */
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
		return (dsize + srclen);
	n = dsize - initial_dstlen - 1;
	while (n > 0 && *s != '\0')
	{
		*d++ = *s++;
		n--;
	}
	if (dsize > 0)
		*d = '\0';
	return (dstlen + ft_strlen(src));
}
