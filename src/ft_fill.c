/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:54:23 by gartaud           #+#    #+#             */
/*   Updated: 2020/11/21 11:33:40 by gartaud          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Puts in s1 the rest of s2 untill the next '%'
** character or the end of s2
*/

void	ft_fill(t_print *p, int *i)
{
	char	*sub;
	char	*tmp;
	char	*rd_head;
	int		sub_ln;

	rd_head = p->format + *i;
	if ((tmp = ft_strchr(rd_head, '%')))
		sub_ln = tmp - rd_head;
	else
		sub_ln = ft_strlen(rd_head);
	if (!sub_ln)
		return ;
	sub = ft_substr(rd_head, 0, sub_ln);
	ft_strmcat(&(p->out), sub);
	*i += sub_ln - 1;
	free(sub);
	return ;
}
