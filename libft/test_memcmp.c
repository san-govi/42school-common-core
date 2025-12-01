/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 15:33:43 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/01 15:35:57 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	// returns 0
	printf("%d\n", ft_memcmp("abc", "abc", 3));
	// returns -99
	printf("%d\n", ft_memcmp("ab", "abc", 3));
	// return +99
	printf("%d\n", ft_memcmp("abc", "ab", 3));
	// returns -1
	printf("%d\n", ft_memcmp("abc", "abd", 3));
	// returns -1
	printf("%d\n", ft_memcmp("abc", "abd", 5));
	// returns 0
	printf("%d\n", ft_memcmp("abc", "abc", 5));
}
