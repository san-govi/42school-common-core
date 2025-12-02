/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:22:17 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/02 16:31:44 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void del_string(void *content)
{
    free(content);
}

int main(void)
{
	t_list	*head;
	char	*str;
	char	*str2;
	char	*str3;
	
	str = ft_strdup("A");
	str2 = ft_strdup("B");
	str3 = ft_strdup("C");
	head = ft_lstnew(str);
	head->next = ft_lstnew(str2); 
	head->next->next = ft_lstnew(str3);
	while (head)
	{
		printf("Content: %s, Next: %p -> ",
				(char *)head->content, (void *)head->next);
		head = head->next;
	}
	printf("NULL\n");
	ft_lstclear(&head, del_string);
	// use valgrind to check memory has been freed. valgrind ./main
	return 0;
}