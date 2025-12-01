/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 22:55:31 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/01 15:48:07 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char	*s = "Hello world";

	// print 'lo wor'
	printf("%s\n", ft_substr(s, 3, 6));
	// print null - start index beyond string 
	printf("%s\n", ft_substr(s, 11, 6));
	// print rld - max len greater that string
	printf("%s\n", ft_substr(s, 8, 6));
}
