/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzu <zuzu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 13:52:17 by zuzu              #+#    #+#             */
/*   Updated: 2026/08/11 17:45:15 by zuzu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// the size of int? max min? what if its not nbr?
// check if space

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	sign = 1;
	int	i = 0;
	int	j = 0;

	while(str[j] == ' ' || ((str[j]) >= 9 && str[j] <= 13))
		j++;
	if (str[j] == '+' || str[j] == '-')
	{
		if (str[j] == '-')
		sign = -1;
		j++;
	}
	while ('0' <= str[j] && str[j] <= '9')
	{
		i = i*10 + str[j] - '0';
		j++;
	}
	return (i*sign);
}

int	main(void)
{
	// char	*s1 = "1234";
	// char	*s2 = "-234";
	char	*s3 = "   90aa";

	// printf("s1 is %i", ft_atoi(s1));
	// printf("s2 is %i", ft_atoi(s2));
	printf("s3 is %i", ft_atoi(s3));

	return (0);
}
