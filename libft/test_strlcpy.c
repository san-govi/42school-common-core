/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 00:33:08 by sgovinda          #+#    #+#             */
/*   Updated: 2025/11/30 12:25:37 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char 	dst[5] = "0000";
	size_t	srclen;
	
	printf("%s\n", dst);
	srclen = ft_strlcpy(dst, "abcdefghi", 5);
	printf("%s\n", dst);
	printf("%ld\n", srclen);
}