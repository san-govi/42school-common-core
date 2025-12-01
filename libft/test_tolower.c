/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 13:09:02 by sgovinda          #+#    #+#             */
/*   Updated: 2025/12/01 15:48:26 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	//Lowercase
	printf("%c\n", ft_tolower('a'));
	printf("%c\n", ft_tolower('z'));
	printf("%c\n", ft_tolower('\xE9'));
	//Uppercase
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", ft_tolower('Z'));
	//Digits
	printf("%c\n", ft_tolower('0'));
	//Non-pintable characters
	printf("%c\n", ft_tolower(' '));
	printf("%c\n", ft_tolower('\0'));
	printf("%c\n", ft_tolower(127));
}
