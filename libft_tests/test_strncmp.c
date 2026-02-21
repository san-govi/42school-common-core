/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 14:47:58 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/01 15:45:23 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	// returns 0
	printf("%d\n", ft_strncmp("abc", "abc", 3));
	// returns -99
	printf("%d\n", ft_strncmp("ab", "abc", 3));
	// return +99
	printf("%d\n", ft_strncmp("abc", "ab", 3));
	// returns -1
	printf("%d\n", ft_strncmp("abc", "abd", 3));
	// returns -1
	printf("%d\n", ft_strncmp("abc", "abd", 5));
	// returns 0
	printf("%d\n", ft_strncmp("abc", "abc", 5));
}
