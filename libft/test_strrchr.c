/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 14:00:45 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/01 15:47:16 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	s[10] = "Hooty";
	char	*p;
	char	*q;
	char	*r;
	char	*t;

	//Address of H
	p = ft_strrchr(s, 'H');
	printf("%p, %s\n", p, p);
	//Address of 2nd o
	q = ft_strrchr(s, 'o');
	printf("%p, %s\n", q, q);
	//Address of null terminator
	r = ft_strrchr(s, '\0');
	printf("%p, %s\n", r, r);
	//Null as character not found in string
	t = ft_strrchr(s, 'u');
	printf("%p, %s\n", t, t);
}
