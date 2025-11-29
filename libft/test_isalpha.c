/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 17:18:15 by sgovinda          #+#    #+#             */
/*   Updated: 2025/11/29 18:10:10 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	test_isalpha(int c, int expected, const char *description)
{
	if (ft_isalpha(c) == expected)
	{
		printf("[PASS] %c is %s\n", c, description);
	}
	else
	{
		printf("[FAIL] %c is %s, expected %d\n", c, description, expected);
	}
}
int	main(void)
{
	// Alpha tests
	test_isalpha('A', 1, "uppercase letter.");
	test_isalpha('Z', 1, "uppercase letter.");
	test_isalpha('a', 1, "lowercase letter.");
	test_isalpha('z', 1, "lowercase letter.");
	
	// Non-alpha tests
	test_isalpha('0', 0, "digit.");
	test_isalpha('@', 0, "symbol before A.");
	test_isalpha('[', 0, "symbol after Z.");
	test_isalpha('`', 0, "symbol before a.");
	test_isalpha('{', 0, "symbol after Z.");
	
	// Special case
	test_isalpha(EOF, 0, "End Of File marker");
}