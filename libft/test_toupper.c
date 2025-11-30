/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 12:54:50 by sgovinda          #+#    #+#             */
/*   Updated: 2025/11/30 13:03:51 by sgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	//Lowercase
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_toupper('z'));
	printf("%c\n", ft_toupper('\xE9'));
	//Uppercase
	printf("%c\n", ft_toupper('A'));
	printf("%c\n", ft_toupper('Z'));
	//Digits
	printf("%c\n", ft_toupper('0'));
	//Non-pintable characters
	printf("%c\n", ft_toupper(' '));
	printf("%c\n", ft_toupper('\0'));
	printf("%c\n", ft_toupper(127));
}