/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 15:13:57 by sgovinda          #+#    #+#             */
/*   Updated: 2025/11/30 15:22:44 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char s[10] = "abcdef";

	// print adrees of c
	printf("%p\n", ft_memchr(s, 'c', 7));
	// prints NULL
	printf("%p\n", ft_memchr(s, 'l', 7));
	// prints NULL
	printf("%p\n", ft_memchr(s, 'c', 2));
	// some undefined behaviour
	printf("%p\n", ft_memchr(s, 'l', 11));
}