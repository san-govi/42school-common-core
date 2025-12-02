/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstlast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 00:19:01 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/02 00:25:16 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	t_list	*head;
	t_list	*tmp;

	head = ft_lstnew("A");
	head->next = ft_lstnew("B");
	head->next->next = ft_lstnew("C");
	head->next->next->next = ft_lstnew("D");
	printf("%s\n", (char *)ft_lstlast(head)->content);
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	return (0);
}
