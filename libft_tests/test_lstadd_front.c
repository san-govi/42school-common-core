/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstadd_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 23:27:08 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/02 18:22:10 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	print_list(t_list *head)
{
	while (head)
	{
		printf("%s -> ", (char *)head->content);
		head = head->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list	*head;
	t_list	*new;
	t_list	*tmp;

	head = ft_lstnew("B");
	head->next = ft_lstnew("C");
	head->next->next = ft_lstnew("D");
	print_list(head);
	new = ft_lstnew("A");
	ft_lstadd_front(&head, new);
	print_list(head);
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	return (0);
}
