/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 21:21:12 by sgovinda          #+#    #+#             */
/*   Updated: 2026/05/13 21:57:29 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

/*
** Extracts the next argument in va_list.
** Dispatches the correct handler based on the format specifier extracted.
*/
int	handle_specifier(char specifier, va_list arg)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += handle_char((char)va_arg(arg, int));
	else if (specifier == 's')
		count += handle_string(va_arg(arg, char *));
	else if (specifier == 'i' || specifier == 'd')
		count += handle_nbr(va_arg(arg, int));
	else if (specifier == 'u')
		count += handle_unsigned_int(va_arg(arg, unsigned int));
	else if (specifier == 'p')
		count += handle_pointer((unsigned long)va_arg(arg, void *));
	else if (specifier == 'x' || specifier == 'X')
		count += handle_hexadecimal(va_arg(arg, unsigned int), specifier);
	else if (specifier == '%')
		count += write(1, "%", 1);
	return (count);
}
/*
** Main ft_printf loop:
** - Prints characters until '%' is found.
** - On '%', moves to the specifier and dispatches correct handler.
** - Only advances past the specifier if it is valid, otherwise returns -1.
*/

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		count;

	count = 0;
	va_start(arg, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c' || *format == 's' || *format == 'p'
				|| *format == 'd' || *format == 'i' || *format == 'u'
				|| *format == 'x' || *format == 'X' || *format == '%' )
				count += handle_specifier(*format++, arg);
			else
			{
				va_end(arg);
				return (-1);
			}
		}
		else
			count += write(1, format++, 1);
	}
	va_end(arg);
	return (count);
}
