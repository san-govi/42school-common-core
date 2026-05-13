/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:58:18 by sgovinda          #+#    #+#             */
/*   Updated: 2026/05/13 22:03:38 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h> /* for write */
# include <stdlib.h> /* for malloc, and free */
# include <stdarg.h> /* for va_start, va_arg, va_copy, and va_end */

int		ft_printf(const char *format, ...);

/* Specifier handlers. */
int	handle_char(char);
int	handle_string(char *);
int	handle_nbr(long int);
int	handle_unsigned_int(unsigned int);
int	handle_hexadecimal(unsigned int, char);
int handle_pointer(unsigned long ptr);
#endif