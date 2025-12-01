/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:23:31 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/01 19:35:59 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	to_upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	to_lower(unsigned int i, char c)
{
	(void)i;
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int	main(void)
{
	char	*res1 = ft_strmapi("abc", to_upper);
	char	*res2 = ft_strmapi("ABC", to_lower);

	printf("%s\n", res1); // should print "ABC"
	printf("%s\n", res2); // should print "abc"
	free(res1);
	free(res2);
	return (0);
}
