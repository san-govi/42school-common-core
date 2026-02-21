/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:24:26 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/02 18:18:05 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

void	*to_upper(void *content)
{
	char	*str;
	char	*dup;

	str = (char *)content;
	dup = ft_strdup(str);
	if (!dup)
		return (NULL);
	dup[0] = ft_toupper((unsigned char)dup[0]);
	return (dup);
}

void	del_content(void *content)
{
	free(content);
}

int main(void)
{
	t_list *original;
	t_list *mapped;

	original = ft_lstnew(ft_strdup("a"));
	original->next = ft_lstnew(ft_strdup("b"));
	original->next->next = ft_lstnew(ft_strdup("c"));
	ft_lstiter(original, print_content);
	mapped = ft_lstmap(original, to_upper, del_content);
	ft_lstiter(mapped, print_content);
	ft_lstclear(&original, del_content);
	ft_lstclear(&mapped, del_content);
	return (0);
}
