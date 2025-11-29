/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 18:31:01 by sgovinda          #+#    #+#             */
/*   Updated: 2025/11/29 19:37:33 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	test_isdigit(int c, int expected, const char *description)
{
	if(ft_isdigit(c) == expected)
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
	test_isdigit('0', 1, "digit.");
	test_isdigit('5', 1, "digit.");
	test_isdigit('9', 1, "digit.");

	// Non-digit test.
	test_isdigit('A', 0, "an uppercase letter.");
	test_isdigit('a', 0, "a lowercase letter.");
	test_isdigit('/', 0, "a special character.");
	test_isdigit(':', 0, "punctuation.");

	//Special cases.
	
	test_isdigit(EOF, 0, "End of file marker");
}