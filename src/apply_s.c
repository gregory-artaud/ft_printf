/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 14:32:22 by gartaud           #+#    #+#             */
/*   Updated: 2020/12/01 19:04:11 by gartaud          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	get_flag(t_print *p, int spc_i)
{
	char	res;

	res = 0;
	while (isflag(p->format[spc_i]))
	{
		if (p->format[spc_i] == '-')
			res = '-';
		else if (p->format[spc_i] == '0' && res != '-'
				&& p->precision == -1)
			res = '0';
		spc_i++;
	}
	return (res);
}

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
	int		i;
	int		res_ln;

	str = (char *)va_arg(*(p->args), char *);
	if (!str)
		str = ft_strdup("(null)");
	i = -1;
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
	//printf("flag : %c\n", get_flag(p, spc_i));
	return ;
}
