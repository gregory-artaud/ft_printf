/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_percent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 14:32:22 by gartaud           #+#    #+#             */
/*   Updated: 2020/12/04 10:24:56 by gartaud          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			apply_percent(char **dest, t_print *p, int spc_i)
{
	if (!p->min_width)
		p->min_width++;
	if (!(*dest = ft_calloc(p->min_width + 1, 1)))
		return (0);
	ft_memset(*dest, ' ', p->min_width);
	if (!get_flag(p, spc_i))
		(*dest)[p->min_width - 1] = '%';
	else if (get_flag(p, spc_i) == '-')
		**dest = '%';
	else if (get_flag(p, spc_i) == '0')
	{
		ft_memset(*dest, '0', p->min_width);
		(*dest)[p->min_width - 1] = '%';
	}
	return (ft_strlen(*dest));
}
