/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 10:18:54 by gregory           #+#    #+#             */
/*   Updated: 2020/11/04 11:53:11 by gregory          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>
#include "libft.h"

static int		count_digits(int n)
{
	unsigned int	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char	*res;
	int		is_neg;
	int		num_len;
	int		next_digit;

	is_neg = (n < 0);
	num_len = count_digits(n) + is_neg;
	res = malloc(sizeof(char) * (num_len + 1));
	res[num_len--] = 0;
	if (is_neg)
		res[0] = '-';
	while (num_len >= is_neg)
	{
		next_digit = n % 10;
		if (next_digit < 0)
			next_digit *= -1;
		res[num_len--] = next_digit + '0';
		n /= 10;
	}
	return (res);
}
