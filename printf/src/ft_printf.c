/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 21:21:12 by sgovinda          #+#    #+#             */
/*   Updated: 2026/02/22 00:01:16 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

/*
** Dispatches the correct handler based on the format specifier.
** For now, all specifiers call handle_char() as a placeholder.
** Invalid specifiers print '%' and leave the character to be printed literally.
*/
void	handle_specifier(char specifier, va_list arg)
{
	if (specifier == 'c')
		handle_char(arg);
	else if (specifier == 's')
		handle_string(arg);
	else if (specifier == 'p')
		handle_char(arg);
	else if (specifier == 'd')
		handle_char(arg);
	else if (specifier == 'i')
		handle_char(arg);
	else if (specifier == 'u')
		handle_char(arg);
	else if (specifier == 'x')
		handle_char(arg);
	else if (specifier == 'X')
		handle_char(arg);
	else if (specifier == '%')
		handle_char(arg);
	else
	{
		// Invalid specifiers print '%' and let ft_printf print the next char.
		write(1, "%", 1); 
	}
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

	va_start(arg, format);
	while (*format)
	{
		if (*format == '%') // Detect specfier.
		{
			format++; // Move to specifier.
			handle_specifier(*format, arg); // Dispatch correct handler.
			if (*format == 'c' || *format == 's' || *format == 'p'
				|| *format == 'd' || *format == 'i' || *format == 'u'
				|| *format == 'x' || *format == 'X' || *format == '%' )
			{
				format++; // Moves on only if specifier is valid.
			}
		}
		else
		{
			write(1, format, 1);
			format++;
		}
	}
	write(1, "\n", 1);
	va_end(arg);
	return (0);
}
