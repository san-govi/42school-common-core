/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 21:21:12 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/06 21:29:05 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "printf.h"

void	ft_printf(char *format, ...)
{
	va_list	arg;

	va_start(arg, format);
	while (*format)
	{
		if (format == '%')
		{
			convert(format + 1, arg);
		}
		
	}
}
