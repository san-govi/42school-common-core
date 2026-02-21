/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 17:03:32 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/01 15:46:52 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char	*big = "Hello, this is a simple test string.";
	const char	*little = "simple";
	size_t		len = 30;
	char		*result = ft_strnstr(big, little, len);

	if (result)
		printf("Found: %s\n", result);
	else
		printf("Not Found\n");
	return (0);
}
