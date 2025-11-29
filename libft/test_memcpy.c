/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 22:04:16 by sgovinda          #+#    #+#             */
/*   Updated: 2025/11/29 22:08:09 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
	char	src[] = "abcdefghi";
	char	dest[10];

	ft_memcpy(dest, src, 5);
	dest[5] = '\0';
	// prints dest
	printf("%s\n", dest);
	return (0);
}