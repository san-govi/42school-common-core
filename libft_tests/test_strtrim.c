/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 01:04:32 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/01 15:47:42 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	//print hello
	printf("%s\n", ft_strtrim("---hello   ", " -"));
	//print empty string
	printf("%s\n", ft_strtrim("abcabc", "abc"));
	//print empty string
	printf("%s\n", ft_strtrim("", " "));
	//print test
	printf("%s\n", ft_strtrim("test", ""));
	//print test
	printf("%s\n", ft_strtrim("test", "xyz"));
}
