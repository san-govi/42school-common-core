/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_unsigned_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 17:48:26 by sgovinda          #+#    #+#             */
/*   Updated: 2026/05/13 22:19:40 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "utils.h"

/*
**Handles the %u specifier.
** Extracts the next argument as an unsigned integer and print it.
** Returns the number of digits.
*/

int	handle_unsigned_int(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr > 9)
	{
		count += handle_unsigned_int(nbr / 10);
	}
	count += ft_putchar((nbr % 10) + '0');
	return (count);
}
