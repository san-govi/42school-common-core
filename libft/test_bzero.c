/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 21:15:50 by sgovinda          #+#    #+#             */
/*   Updated: 2025/11/29 21:25:05 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
	char	c[10] = "abcdefghi";
	ft_bzero(c, 5);
	c[9] = '\0';
	// prints nothing
	printf("%s\n", c);
	// prints fghi
	printf("%s\n", c + 5);
	return (0);
}