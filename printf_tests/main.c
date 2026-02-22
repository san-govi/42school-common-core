/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:31:42 by sgovinda          #+#    #+#             */
/*   Updated: 2026/02/22 00:28:26 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	// Tests %c specifier and invalid specifier.
	ft_printf("I have an %c and a %c and a %f", 'A', 'D', 'C');

	// Test %s specifier and null argument.
	ft_printf("Hello %s and hi %s. Goodbye %f.", "Sangeetha", "Daniel", 'C');
	ft_printf("Hello %s and hi %s. Goodbye %f.", "Sangeetha");
	
}