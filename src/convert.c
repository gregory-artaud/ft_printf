/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 10:07:41 by gartaud           #+#    #+#             */
/*   Updated: 2020/12/04 18:47:29 by gartaud          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		convert(t_print *p, int *i)
{
	int		spc_ln;
	char	*tmp;
	int		res_ln;

	spc_ln = spclen(p->format + *i);
	init_spc(p, *i + 1);
	res_ln = process_spc(&tmp, p, *i + 1);
	write(STDOUT, tmp, res_ln);
	free(tmp);
	*i += spc_ln - 1;
	reset_spc(p);
	return (res_ln);
}
