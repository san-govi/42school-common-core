/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:31:42 by sgovinda          #+#    #+#             */
/*   Updated: 2026/05/13 21:33:45 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	
	int my_ret;
	int my_ret2;
    int real_ret;
	int real_ret2;

	char *str;

	str = "Name";

    // Test real printf
    real_ret = printf("Real: Hello %c %p %x %X %i %u %s!\n", 70, str, 255, 255,123, -123, "World");
	
    // Test your ft_printf
    my_ret = ft_printf("Mine: Hello %c %p %x %X %i %u %s!\n", 70, str, 255, 255, 123, -123, "World");
	
	// Print the results
    printf("Real returned: %d\n", real_ret);
    printf("Mine returned: %d\n", my_ret);

	// Print invalid specifier the results

	real_ret2 = printf("Real: Hello %");
	write(1,"\n", 1);
	my_ret2 = ft_printf("Mine: Hello %");
	write(1,"\n", 1);
	
	printf("Real returned: %d\n", real_ret2);
    printf("Mine returned: %d\n", my_ret2);
    
    return (0);
}