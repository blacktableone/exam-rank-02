/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzu <zuzu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 23:43:47 by zuzu              #+#    #+#             */
/*   Updated: 2026/08/19 02:00:00 by zuzu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //write
#include <stdlib.h> //exit
#include <stdio.h> //print

int	sum(const char *str)
{
	const char	*tmp = str;
	int		i = 0;
	int		sum = 0;

	while (tmp[i] != '\0')
	{
		if (tmp[i] >= '0' && tmp[i] <= '9')
		{
			sum = 10 * sum + tmp[i] - '0';
			i++;
		}
		else
			return (0);
	}
	return (sum);
}


int	is_prime(int num)
{
	int	d = 2;
	while (d < num)
	{
		if (num % d == 0)
			return (0);
		d++;
	}
	return (num);
}

void	print_int(int p_sum)
{
	if (p_sum >= 10)
		print_int(p_sum / 10);
	p_sum = p_sum % 10 + '0';
	write(1, &p_sum, 1);
}

int	main(int argc, char **argv)
{
	int p_sum = 0;
	if (argc == 2)
	{
		int num = sum(argv[1]);

		while (num >= 2)
		{
			p_sum = p_sum + is_prime(num);
			num--;
		}

		print_int(p_sum);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return(0);
}
