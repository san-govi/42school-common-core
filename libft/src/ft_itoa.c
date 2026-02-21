/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 16:10:38 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/01 17:55:51 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	numlen(long n)
{
	int	len;

	len = 0;
	if (n == 0)
	{
		len = 1;
	}
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ascii;
	int		len;
	long	num;

	num = n;
	len = numlen(num);
	ascii = malloc(sizeof(char) * (len + 1));
	if (!ascii)
		return (NULL);
	ascii[len] = '\0';
	if (num == 0)
	{
		ascii[0] = '0';
	}
	if (num < 0)
	{
		ascii[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		ascii[--len] = (num % 10) + '0';
		num = num / 10;
	}
	return (ascii);
}
