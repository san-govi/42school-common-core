/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 17:18:13 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/01 14:47:34 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	const char	*str;
	int			result;

	str = "   -12345abc";
	result = ft_atoi(str);
	printf("The converted integer is: %d\n", result);
	return (0);
}
