/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 23:09:28 by sgovinda          #+#    #+#             */
/*   Updated: 2026/05/13 22:16:03 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Handles the %c specifier.
** casts it to char, and writes it to stdout.
*/
int	handle_char(char c)
{
	return (write(1, &c, 1));
}
