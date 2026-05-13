/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 00:01:47 by sgovinda          #+#    #+#             */
/*   Updated: 2026/05/13 19:30:11 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "utils.h"

/*
** Handles the %s specifier.
** If the string is NULL, prints "(null)" to match printf behaviour.
*/

int	handle_string(char *s)
{
	int		len;

	if (!s)
		s = "(null)";
	len = ft_strlen(s);
	write(1, s, len);
	return(len);
}
