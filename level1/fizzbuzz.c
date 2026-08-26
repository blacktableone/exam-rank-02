/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisu <nisu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 02:57:04 by nisu              #+#    #+#             */
/*   Updated: 2026/08/11 04:35:48 by nisu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;
		
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	c = (n % 10) + '0';
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1,"fizzbuzz\n",9);
		else if (i % 3 == 0)
			write(1,"fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{	
			ft_putnbr(i);
			write(1,"\n", 1);
		}
		i++;
	}
	return (0);
}