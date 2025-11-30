/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 23:40:24 by sgovinda          #+#    #+#             */
/*   Updated: 2025/11/30 23:42:21 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	// "Hello, World!"
	printf("%s\n", ft_strjoin("Hello, ", "World!"));
	// "Suffix"
	printf("%s\n", ft_strjoin("", "Suffix"));
	// "Prefix"
	printf("%s\n", ft_strjoin("Prefix", ""));
}