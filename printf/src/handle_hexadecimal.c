/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hexadecimal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 18:05:00 by sgovinda          #+#    #+#             */
/*   Updated: 2026/05/13 22:17:43 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "utils.h"

/*
** Handles the %x and %X specifier.
** Extracts the next argument as an unsigned int and coverts to unsigned
** hexidecimal notation.
** Returns count of digits that must be printed.
*/

int	handle_hexadecimal(unsigned int nbr, char specifier)
{
	char	*hexadecimal_upper;
	char	*hexadecimal_lower;
	int		count;

	count = 0;
	hexadecimal_upper = "0123456789ABCDEF";
	hexadecimal_lower = "0123456789abcdef";
	if (nbr > 15)
	{
		count += handle_hexadecimal(nbr / 16, specifier);
	}
	if (specifier == 'x')
	{
		count += ft_putchar(hexadecimal_lower[nbr % 16]);
	}
	else
	{
		count += ft_putchar(hexadecimal_upper[nbr % 16]);
	}
	return (count);
}
