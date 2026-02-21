/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:06:26 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/01 18:20:40 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newstring;
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	newstring = malloc(len + 1);
	if (!newstring)
		return (NULL);
	i = 0;
	while (i < len)
	{
		newstring[i] = f(i, s[i]);
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}
