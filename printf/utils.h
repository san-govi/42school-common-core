/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 00:47:36 by sgovinda          #+#    #+#             */
/*   Updated: 2026/02/22 00:48:05 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include <unistd.h> // for write
# include <stdlib.h> // for malloc, and free
# include <stdarg.h> // for va_start, va_arg, va_copy, and va_end

//Utility functions.
int		ft_strlen(char *str);
void	ft_putchar(char c);

#endif