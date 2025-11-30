/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 11:59:57 by sgovinda          #+#    #+#             */
/*   Updated: 2025/11/30 12:20:03 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char dst1[10] = "abcde";
	char dst2[20] = "abcdefghijk";
	char dst3[10] = "abcdefghi";
	char dst4[10] = "abcde";

	//Enough space - returns abcdefgh, 8
	printf("%s, %ld\n", dst1, ft_strlcat(dst1, "fgh", sizeof(dst1))); 
	// Dst larger than size - returns abcdefghijk, 13
	printf("%s, %ld\n", dst2,ft_strlcat(dst2, "fgh", 10)); 
	// No space - returns abcdefghi, 12
	printf("%s, %ld\n", dst3,ft_strlcat(dst3, "fgh", sizeof(dst3))); 
	// Truncation - returns abcdefghi, 11
	printf("%s, %ld\n", dst4,ft_strlcat(dst4, "fghijk", sizeof(dst4))); 
}