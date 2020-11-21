/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 10:07:41 by gartaud           #+#    #+#             */
/*   Updated: 2020/11/21 15:36:51 by gartaud          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_process_spc(char *s, char c)
{
	(void)s;
	(void)c;
	return ;
}

void	ft_convert(t_print *p, int *i)
{
	int		spc_ln;
	int		j;
	char	*tmp;

	if (!(tmp = malloc(sizeof(char))))
		return ;
	*tmp = 0;
	spc_ln = ft_spcln(p->format + *i);
	j = -1;
	while (++j < spc_ln)
		ft_process_spc(tmp, p->format[j + *i + 1]);
	ft_strmcat(&(p->out), tmp);
	*i += spc_ln - 1;
	return ;
}
