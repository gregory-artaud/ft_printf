/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 14:32:22 by gartaud           #+#    #+#             */
/*   Updated: 2020/12/04 17:43:35 by gartaud          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	set_head(char **dest)
{
	char	*tmp;

	tmp = ft_strdup("0x");
	ft_strmcat(&tmp, *dest);
	free(*dest);
	*dest = tmp;
	return ;
}

int		apply_p(char **dest, t_print *p, int spc_i)
{
	long int	arg;
	int			is_neg;

	arg = (unsigned long)va_arg(*(p->args), unsigned long);
	is_neg = (arg < 0);
	if (!arg && !p->precision)
		*dest = ft_strdup("");
	else
		*dest = ft_itoa_base(ABS(arg), "0123456789abcdef");
	if (!dest)
		return (0);
	set_head(dest);
	apply_flags_nb(dest, p, spc_i, is_neg);
	return (ft_strlen(*dest));
}
