/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 19:45:24 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/01 15:35:05 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	test_isprint(int c, int expected, const char *description)
{
	if (ft_isprint(c) == expected)
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
	// Printable character tests.
	test_isprint('A', 1, "an upper case letter.");
	test_isprint(126, 1, "a non printable character in ascii range");
	test_isprint('a', 1, "a lowercase letter.");
	test_isprint('/', 1, "a special character.");
	test_isprint(':', 1, "punctuation.");

	// Non-printable character tests.
	test_isprint(127, 0, "a non printable character in ascii range");
	test_isprint(31, 0, "a non printable character in ascii range");

	// Not is ASCII range.
	test_isprint(200, 0, "out of ascii range.");
	test_isprint(-1, 0, "out of ascii range.");
}
