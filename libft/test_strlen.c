/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 20:09:22 by sgovinda          #+#    #+#             */
/*   Updated: 2025/11/29 20:22:02 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	test_strlen(char *c, size_t expected)
{
	if (ft_strlen(c) == expected)
	{
		printf("[PASS] %s, calculated length is %ld\n", c, expected);
	}
	else
	{
		printf("[FAIL] %s, calculated length is %ld but expected %ld\n",
			 c, ft_strlen(c), expected);
	}
}
int	main(void)
{
	test_strlen("Letters", 7);
	test_strlen("", 0);
	test_strlen("42", 2);
	test_strlen("\n", 1);
}
