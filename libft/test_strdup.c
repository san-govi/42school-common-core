/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 22:05:35 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/01 15:42:01 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

int	main(void)
{
	const char	*original = "abcdefghi";
	char		*dup = ft_strdup(original);

	printf("%s\n", dup);
	free(dup);
	dup = NULL;
	if (dup == NULL)
	{
		printf("Memory successfully freed!\n");
	}
}
