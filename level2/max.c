/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisu <nisu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 18:35:51 by nisu              #+#    #+#             */
/*   Updated: 2026/09/01 18:55:48 by nisu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 第一个参数是一个整数数组，第二个参数是数组中元素的数量。
// 该函数返回数组中最大的数字。
// 如果数组为空，则函数返回 0。

// #include <stdio.h>

int		max(int *tab, unsigned int len)
{
	unsigned int i =  0; // 比较 unsigned int
	
	if (len == 0)
		return (0);
	if (len == 1)
		return (tab[0]);
	int max = tab[0];
	i = 1;
	while (i < len) // 
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}

// int main(void)
// {
// 	int tab[] = {1, 3, 10, 0};
// 	unsigned int len = 4;

// 	printf("max is %i", max(tab, len));
// 	return (0);
// }