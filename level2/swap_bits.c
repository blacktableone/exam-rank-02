/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisu <nisu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 20:12:19 by nisu              #+#    #+#             */
/*   Updated: 2026/08/27 20:36:05 by nisu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char   swap_bits(unsigned char octet)
{
	int	right = 15;
	int	left = 240;
	unsigned char x = 0;
	unsigned char y = 0;
	
	x = octet & right;
	y = octet & left;
	y = y >> 4;
	x = x << 4;
	return (x | y );
}