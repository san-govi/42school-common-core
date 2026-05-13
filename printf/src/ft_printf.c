/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 21:21:12 by sgovinda          #+#    #+#             */
/*   Updated: 2026/05/13 17:45:00 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

/*
** Dispatches the correct handler based on the format specifier.
** For now, all specifiers call handle_char() as a placeholder.
** Invalid specifiers print '%' and leave the character to be printed literally.
*/
int	handle_specifier(char specifier, va_list arg)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += handle_char(arg);
	else if (specifier == 's')
		count += handle_string(arg);
	else if (specifier == 'i' || specifier == 'd')
		count += handle_nbr(va_arg(arg, int));
	else if (specifier == 'u')
		count += handle_unsigned_int(va_arg(arg, unsigned int));
	else if (specifier == 'p')
		count += handle_char(arg);
	else if (specifier == 'x')
		count += handle_char(arg);
	else if (specifier == 'X')
		count += handle_char(arg);
	else if (specifier == '%')
		count += write(1, "%", 1);
	else
		// Invalid specifiers print '%' and let ft_printf print the next char.
		count += write(1, "%", 1);
	return (count);
}
/*
** Main ft_printf loop:
** - Prints characters until '%' is found.
** - On '%', moves to the specifier and dispatches correct handler.
** - Only advances past the specifier if it is valid.
** - Invalid specifiers print '%' and then the character literally
*/
int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		counter;

	counter = 0;
	va_start(arg, format);
	while (*format)
	{
		if (*format == '%') // Detect specfier.
		{
			format++; // Move to specifier.
			counter += handle_specifier(*format, arg); // Dispatch correct handler.
			if (*format == 'c' || *format == 's' || *format == 'p'
				|| *format == 'd' || *format == 'i' || *format == 'u'
				|| *format == 'x' || *format == 'X' || *format == '%' )
				format++; // Moves on only if specifier is valid.
		}
		else
		{
			write(1, format, 1);
			counter++;
			format++;
		}
	}
	va_end(arg);
	return (counter);
}
