/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 19:08:23 by sgovinda          #+#    #+#             */
/*   Updated: 2026/05/13 22:18:44 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "utils.h"

/*
** Handles the %p specifier.
** If the pointer is NULL, prints "(nil)" to match printf behaviour
*/

int	handle_pointer_hexadecimal(unsigned long ptr)
{
	char	*hexadecimal_lower;
	int		count;

	count = 0;
	hexadecimal_lower = "0123456789abcdef";
	if (ptr > 15)
	{
		count += handle_pointer_hexadecimal(ptr / 16);
	}
	count += ft_putchar(hexadecimal_lower[ptr % 16]);
	return (count);
}

int	handle_pointer(unsigned long ptr)
{
	int		count;

	count = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	count += write(1, "0x", 2);
	count += handle_pointer_hexadecimal(ptr);
	return (count);
}
