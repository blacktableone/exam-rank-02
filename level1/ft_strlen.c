/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisu <nisu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 18:25:23 by nisu              #+#    #+#             */
/*   Updated: 2026/08/10 21:16:06 by nisu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

size_t	ft_strlen(const char*s)
{
	const char	*start;

	start = s;
	while (*s)
		s++;
	return (s - start);
}

int	main(void)
{
	char	*str1 = "1";
	char	*str2 = "hello";
	char	*str3 = "";
	printf("str1 length is %zu\n", ft_strlen(str1));
	printf("str1 length is %zu\n", ft_strlen(str2));
	printf("str1 length is %zu\n", ft_strlen(str3));
	
	return (0);
}