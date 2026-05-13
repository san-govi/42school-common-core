/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 14:17:27 by sgovinda          #+#    #+#             */
/*   Updated: 2026/05/13 16:06:10 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"
#include "utils.h"

/*
** Handles the %d and %i specifier.
** Extracts the next argument as an integer or a decimal number and prints it.
*/

int	handle_nbr(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count += write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		count += handle_nbr(nbr / 10);
	}
	count += ft_putchar((nbr % 10) + '0');
	return (count);
}
