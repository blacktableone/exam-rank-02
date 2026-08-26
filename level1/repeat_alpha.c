/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzu <zuzu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 23:35:41 by zuzu              #+#    #+#             */
/*   Updated: 2026/08/12 00:09:24 by zuzu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while(argv[1][i])
		{
			int j = 0;
			if ('a' <= argv[1][i] && argv[1][i] <= 'z')
			{
				j = argv[1][i] - 'a' + 1;
			}
			else if('A' <= argv[1][i] && argv[1][i] <= 'Z')
			{
				j = argv[1][i] - 'A' + 1;
			}
			else
				write(1, &argv[1][i], 1);
			if (j >= 1)
			{
				while(j--)
					write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
