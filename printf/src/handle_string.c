/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 00:01:47 by sgovinda          #+#    #+#             */
/*   Updated: 2026/05/12 23:06:31 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"
#include "utils.h"

/*
** Handles the %s specifier.
** Extracts the next argument as char * and prints it.
** If the string is NULL, prints "(null)" to match printf behaviour.
*/

int	handle_string(va_list arg)
{
	char	*s;
	int		len;

	s = va_arg(arg, char *);
	if (!s)
		s = "(null)";
	len = ft_strlen(s);
	write(1, s, len);
	return(len);
}
