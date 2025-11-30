/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 13:11:41 by sgovinda          #+#    #+#             */
/*   Updated: 2025/11/30 13:23:01 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if(*s == (char)c)
		{
			return((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return((char *)s);
	}
	return NULL;
}