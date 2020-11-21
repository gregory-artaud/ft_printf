/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_print.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 11:28:39 by gartaud           #+#    #+#             */
/*   Updated: 2020/11/21 13:55:58 by gartaud          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_print	*ft_pinit(va_list *args, char *format)
{
	t_print	*new;

	new = malloc(sizeof(t_print));
	if (!new)
		return (0);
	new->args = args;
	new->format = format;
	new->out = malloc(sizeof(char) * 1);
	if (!(new->out))
		return (0);
	*(new->out) = 0;
	return (new);
}

void	ft_pfree(t_print *p)
{
	free(p->out);
	va_end(*(p->args));
	free(p);
}
