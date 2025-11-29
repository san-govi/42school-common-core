/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 19:05:24 by sgovinda          #+#    #+#             */
/*   Updated: 2025/11/29 19:09:09 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	test_isalnum(int c, int expected, const char *description)
{
	if(ft_isalnum(c) == expected)
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
	// Digit tests.
	test_isalnum('0', 1, "is digit.");
	test_isalnum('5', 1, "is digit.");
	test_isalnum('9', 1, "is digit.");

	// Alphabet test.
	test_isalnum('A', 1, "is an uppercase letter.");
	test_isalnum('a', 1, "is a lowercase letter.");

	// Non-alphanumeric test
	test_isalnum('/', 0, "is a special character.");
	test_isalnum(':', 0, "is punctuation.");

	//Special cases.
	
	test_isalnum(EOF, 0, "End of file marker");
}