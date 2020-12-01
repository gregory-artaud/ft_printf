/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 10:07:41 by gartaud           #+#    #+#             */
/*   Updated: 2020/12/01 14:42:01 by gartaud          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	convert(t_print *p, int *i)
{
	int		spc_ln;
	char	*tmp;

	if (!(tmp = malloc(sizeof(char))))
		return ;
	*tmp = 0;
	spc_ln = spclen(p->format + *i);
	init_spc(p, *i + 1);
	process_spc(&tmp, p, *i + 1);
	ft_strmcat(&(p->out), tmp);
	free(tmp);
	*i += spc_ln - 1;
	reset_spc(p);
	return ;
}
