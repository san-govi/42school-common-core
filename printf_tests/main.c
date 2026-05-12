/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:31:42 by sgovinda          #+#    #+#             */
/*   Updated: 2026/05/12 23:06:59 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	// Tests %c specifier and invalid specifier.
	ft_printf("I have an %c and a %c and a %f\n", 'A', 'D', 'C');
	ft_printf("I have an %c and a %c and a %f\n", 'A');

	// Test %s specifier and null argument.
	ft_printf("Hello %s and hi %s. Goodbye %f.\n", "Sangeetha", "Daniel", 'C');
	ft_printf("Hello %s and hi %s. Goodbye %f.\n", "Sangeetha");
	
	int my_ret;
    int real_ret;

    // Test real printf
    real_ret = printf("Real: Hello %s!\n", "World");
    
    // Test your ft_printf
    my_ret = ft_printf("Mine: Hello %s!\n", "World");

    // Print the results
    printf("Real returned: %d\n", real_ret);
    printf("Mine returned: %d\n", my_ret);
    
    return (0);
}