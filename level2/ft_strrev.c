/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisu <nisu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 17:40:30 by nisu              #+#    #+#             */
/*   Updated: 2026/09/06 18:00:07 by nisu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	tmp;
	
	len = 0;
	i = 0;
	while(str[len])
		len++; // len = 5
	while (i < len / 2) 
	{
		tmp = str[i];
		str[i] = str[len - i -1];
		str[len - i -1] = tmp;
		i++;
	}
	return (str);
}