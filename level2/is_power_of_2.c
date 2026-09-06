/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisu <nisu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 19:55:46 by nisu              #+#    #+#             */
/*   Updated: 2026/08/27 20:20:53 by nisu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	//int	check = 0;
	int re = 0;
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	while (n != 2)
	{
		n = n / 2;
		re = n % 2;
		if (re != 0)
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	unsigned int n = 4;
// 	int x = is_power_of_2(n);
// 	printf("is power %i", x);
// }