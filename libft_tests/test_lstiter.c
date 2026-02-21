/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:43:01 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/02 18:22:42 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
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
	ft_lstiter(head, print_content);
	return (0);
}
