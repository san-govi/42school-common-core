/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 00:36:19 by sgovinda          #+#    #+#             */
/*   Updated: 2026/02/22 00:50:20 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utils.h"

/*
** Returns the length of a null-terminated string.
** Iterates through the characters until the terminating '\0'.
*/

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/*
** Writes a single character to standard output.
** Thin wrapper around write(1, &c, 1) for consistency across handlers.
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
