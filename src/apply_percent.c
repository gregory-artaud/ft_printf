/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_percent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 14:32:22 by gartaud           #+#    #+#             */
/*   Updated: 2020/12/01 18:09:01 by gartaud          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	pct_get_flag(t_print *p, int spc_i)
{
	char	res;

	res = 0;
	while (isflag(p->format[spc_i]))
	{
		if (p->format[spc_i] == '-')
			res = '-';
		else if (p->format[spc_i] == '0' && res != '-')
			res = '0';
		spc_i++;
	}
	return (res);
}

void		apply_percent(char **dest, t_print *p, int spc_i)
{
	if (!p->min_width)
		p->min_width++;
	if (!(*dest = calloc(p->min_width + 1, 1)))
		return ;
	ft_memset(*dest, ' ', p->min_width);
	if (!pct_get_flag(p, spc_i))
		(*dest)[p->min_width - 1] = '%';
	else if (pct_get_flag(p, spc_i) == '-')
		**dest = '%';
	else if (pct_get_flag(p, spc_i) == '0')
	{
		ft_memset(*dest, '0', p->min_width);
		(*dest)[p->min_width - 1] = '%';
	}
	return ;
}
