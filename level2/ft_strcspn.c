/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisu <nisu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 19:16:34 by nisu              #+#    #+#             */
/*   Updated: 2026/08/27 19:37:33 by nisu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	const char	*from;
	const char	*to;
	size_t n;

	from = s;
	n = 0;
	while (*from)
	{
		to = reject;
		while (*to)
		{
			if (*from != *to)
				to++;
			else
				return (n);
		}
		from++;
		n++;
	}
	return (n);
}

// int main(void)
// {
// 	const char *s = "a1234";
// 	const char *reject = "a";
// 	size_t num = ft_strcspn(s, reject);

// 	printf("number is %zu\n", num);
// }