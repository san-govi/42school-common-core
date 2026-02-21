/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstsize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 00:03:22 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/02 18:21:18 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	t_list	*head;

	head = ft_lstnew("B");
	head->next = ft_lstnew("C");
	head->next->next = ft_lstnew("D");
	printf("%d\n", ft_lstsize(head));
	return (0);
}
