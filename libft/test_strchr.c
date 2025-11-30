/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 13:23:23 by sgovinda          #+#    #+#             */
/*   Updated: 2025/11/30 13:27:26 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	s[10] = "HUtao";
	char 	*p;

	printf("%s\n", s);
	p = ft_strchr(s, 'U');
	*p = 'u';
	printf("%s\n", s);
}