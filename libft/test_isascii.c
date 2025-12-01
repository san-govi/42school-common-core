/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 19:29:41 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/01 15:34:16 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	test_isascii(int c, int expected, const char *description)
{
	if (ft_isascii(c) == expected)
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
	// ASCII.
	test_isascii('A', 1, "an upper case letter.");
	test_isascii(127, 1, "a non printable character in ascii range");
	test_isascii('a', 1, "a lowercase letter.");
	test_isascii('/', 1, "a special character.");
	test_isascii(':', 1, "punctuation.");

	// Not is ASCII range.
	test_isascii(200, 0, "out of ascii range.");
	test_isascii(-1, 0, "out of ascii range.");
}
