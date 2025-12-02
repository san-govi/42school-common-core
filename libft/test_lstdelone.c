/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 01:15:43 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/02 16:05:21 by sgovinda         ###   ########.fr       */
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
	
	str = ft_strdup("ABCD");
	head = ft_lstnew(str);
	printf("Content: %s, Next: %p\n",
				(char *)head->content, (void *)head->next);
	ft_lstdelone(head, del_string);
	// use valgrind to check memory has been freed. valgrind ./main
	return 0;
}
