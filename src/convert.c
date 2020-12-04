/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 10:07:41 by gartaud           #+#    #+#             */
/*   Updated: 2020/12/04 10:45:13 by gartaud          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
void	ft_strbcat(char **s1, char *buf, int size)
{
	char	*res;
	int		res_ln;
	int		s1_ln;
	int		i;

	if (!*s1)
		s1_ln = 0;
	else
		s1_ln = ft_strlen(*s1);
	res_ln = s1_ln + size;
	if (!(res = ft_calloc(res_ln, 1)))
		return ;
	ft_strlcpy(res, *s1, s1_ln + 1);
	i = -1;
	while (++i < size - 1)
		res[s1_ln + i] = buf[i];
	res[i] = 0;
	free(*s1);
	*s1 = res;
	return ;
}
*/
int		convert(t_print *p, int *i)
{
	int		spc_ln;
	char	*tmp;
	int		res_ln;

	spc_ln = spclen(p->format + *i);
	init_spc(p, *i + 1);
	res_ln = process_spc(&tmp, p, *i + 1);
	//ft_strbcat(&(p->out), tmp, res_ln + 1);
	ft_strmcat(&(p->out), tmp);
	free(tmp);
	*i += spc_ln - 1;
	reset_spc(p);
	return (res_ln);
}
