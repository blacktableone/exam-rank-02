/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisu <nisu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 15:59:46 by nisu              #+#    #+#             */
/*   Updated: 2026/09/01 18:08:43 by nisu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_printed(char *str, int pos)
{
	int i = 0;
	while (i < pos)
	{
		if (str[i] == str[pos])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	is_in_str(char *str, char c)
{
	int	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0' && argv[2][j] != '\0')
		{
			if (is_printed(argv[1],i) == 0 && is_in_str(argv[2], argv[1][i]) == 1)
				write(1, &argv[1][i], 1);
			i++;
			j++;
		}
	}
	write (1, "\n", 1);
	return (0);
}