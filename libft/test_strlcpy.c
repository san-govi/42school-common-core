/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 00:33:08 by sgovinda          #+#    #+#             */
/*   Updated: 2025/11/30 00:39:55 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char 	dst[5];
	size_t	srclen;

	srclen = ft_strlcpy(dst, "abcdefghi", 5);
	printf("%s\n", dst);
	printf("%ld\n", srclen);
}