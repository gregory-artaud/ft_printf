/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:38:44 by gartaud           #+#    #+#             */
/*   Updated: 2020/11/18 17:00:21 by gartaud          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *s, ...)
{
	int		i;
	char	*res;
	int		res_ln;

	if (!(res = malloc(sizeof(char))))
		return (0);
	*res = 0;
	i = -1;
	while (s[++i])
		if (s[i] == '%')
		{
			/*
			** Conversion specifier treatment
			*/
		}
		else
			ft_fill(&res, (char *)s + i, &i);
	ft_putstr_fd(res, STDOUT);
	res_ln = ft_strlen(res);
	free(res);
	return (res_ln);
}
