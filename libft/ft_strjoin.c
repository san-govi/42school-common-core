/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 23:14:06 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/01 13:03:22 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstring;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	newstring = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!newstring)
		return (NULL);
	ft_strlcpy(newstring, s1, s1_len + s2_len + 1);
	ft_strlcat(newstring, s2, s1_len + s2_len + 1);
	return (newstring);
}
