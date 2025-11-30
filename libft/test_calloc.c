/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 20:40:28 by sgovinda          #+#    #+#             */
/*   Updated: 2025/11/30 20:46:27 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main()
{
	size_t nmemb = 5;
	size_t size = sizeof(int);
	size_t i = 0;
	
	int *arr = (int *)ft_calloc(nmemb, size);
	if (!arr)
	{
		printf("Memory allocation failed\n");
		return 1;
	}

	// Verify that all bytes are set to zero
	while (i < nmemb)
	{
		if (arr[i] != 0)
		{
			printf("Test failed: arr[%zu] is not zero\n", i);
			free(arr);
			return (1);
		}
		i++;
	}

	printf("Test passed: All elements are initialised to zero\n");
	free(arr);
	return (0);
}