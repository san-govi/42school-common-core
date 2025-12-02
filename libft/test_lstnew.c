/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 22:40:36 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/02 18:20:52 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	int		value;

	node1 = ft_lstnew("Hello, world!");
	if (node1)
		printf("Content: %s, Next: %p\n",
				(char *)node1->content, (void *)node1->next);
	free(node1);
	value = 123;
	node2 = ft_lstnew(&value);
	if (node2)
		printf("Content: %d, Next: %p\n", *(int *)node2->content,
				(void *)node2->next);
	free(node2);
	return (0);
}
