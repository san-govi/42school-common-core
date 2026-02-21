/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 23:49:31 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/01 15:39:11 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	src2[] = "abcde";
	char	src3[] = "abcde";
	char	src4[] = "abcde";

	//overlap - should print ababe
	ft_memmove(src2 + 2, src2, 2);
	printf("%s\n", src2);

	//starting at the same place - should print abcde
	ft_memmove(src3, src3, 2);
	printf("%s\n", src3);

	//0 bytes copied over - should print abcde
	ft_memmove(src4, src4, 0);
	printf("%s\n", src4);
}
