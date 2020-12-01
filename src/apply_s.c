/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 14:32:22 by gartaud           #+#    #+#             */
/*   Updated: 2020/12/01 22:42:14 by gartaud          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	padding_right(char **dest, int dlen, int size)
{
	char	*pad;
	int		pad_ln;

	pad_ln = size - dlen;
	pad = ft_calloc(pad_ln + 1, 1);
	if (!pad)
		return ;
	ft_memset(pad, ' ', pad_ln);
	ft_strmcat(dest, pad);
	free(pad);
	return ;
}

void	padding_left(char **dest, int dlen, int size)
{
	char	*pad;
	int		pad_ln;

	pad_ln = size - dlen;
	pad = ft_calloc(pad_ln + 1, 1);
	if (!pad)
		return ;
	ft_memset(pad, ' ', pad_ln);
	ft_strmcat(&pad, *dest);
	free(*dest);
	*dest = pad;
	return ;
}

void	apply_s(char **dest, t_print *p, int spc_i)
{
	char	*str;
	int		res_ln;

	str = (char *)va_arg(*(p->args), char *);
	if (!str)
		str = ft_strdup("(null)");
	if (p->precision != -1)
		*dest = ft_strndup(str, p->precision);
	else
		*dest = ft_strdup(str);
	res_ln = ft_strlen(*dest);
	if (res_ln < p->min_width)
	{
		if (get_flag(p, spc_i) == '-')
			padding_right(dest, res_ln, p->min_width);
		else
			padding_left(dest, res_ln, p->min_width);
	}
	return ;
}
