/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 10:07:41 by gartaud           #+#    #+#             */
/*   Updated: 2020/12/10 11:24:04 by gartaud          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		convert(t_print *p, int *i)
{
	int		spc_ln;
	char	*tmp;
	int		res_ln;

	tmp = 0;
	spc_ln = spclen(p->format + *i);
	init_spc(p, *i + 1);
	res_ln = process_spc(&tmp, p, *i + 1);
	if (ft_memchr(p->format + *i, ' ', spc_ln))
		write(STDOUT, " ", 1);
	write(STDOUT, tmp, res_ln);
	if (tmp)
		free(tmp);
	if (spc_ln)
		*i += spc_ln - 1;
	reset_spc(p);
	return (res_ln);
}
