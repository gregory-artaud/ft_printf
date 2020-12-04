/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 14:32:22 by gartaud           #+#    #+#             */
/*   Updated: 2020/12/04 09:17:12 by gartaud          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		apply_s(char **dest, t_print *p, int spc_i)
{
	char	*str;

	str = (char *)va_arg(*(p->args), char *);
	if (!str)
		str = ft_strdup("(null)");
	if (p->precision != -1)
		*dest = ft_strndup(str, p->precision);
	else
		*dest = ft_strdup(str);
	if ((int)ft_strlen(*dest) < p->min_width)
	{
		if (get_flag(p, spc_i) == '-')
			ft_strpad(dest, LFT_RIGHT, p->min_width, ' ');
		else
			ft_strpad(dest, LFT_LEFT, p->min_width, ' ');
	}
	return (ft_strlen(*dest));
}
