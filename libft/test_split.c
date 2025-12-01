/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 15:53:11 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/01 16:07:04 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	**array;
	size_t	i;

	array = ft_split(",,,Hi,,,my name is..,Sangeetha!,", ',');
	i = 0;
	while (array[i])
	{
		printf("%s\n", array[i]);
		i++;
	}
}
