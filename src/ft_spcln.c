/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spcln.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 15:08:29 by gartaud           #+#    #+#             */
/*   Updated: 2020/11/21 15:08:43 by gartaud          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_isflag(char c)
{
	return ((c == '-') || (c == '0')
			|| (c == '.') || (c == '*'));
}

int		ft_isconvert(char c)
{
	return ((c == 'c') || (c == 's')
			|| (c == 'p') || (c == 'd')
			|| (c == 'i') || (c == 'u')
			|| (c == 'x') || (c == 'X')
			|| (c == '%'));
}

int		ft_spcln(char *s)
{
	int		i;

	if (*s != '%')
		return (0);
	i = 1;
	while (ft_isdigit(s[i]) || ft_isflag(s[i]))
		i++;
	while (ft_isconvert(s[i]))
		i++;
	return (i);
}
