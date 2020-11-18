/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:38:44 by gartaud           #+#    #+#             */
/*   Updated: 2020/11/18 16:43:53 by gartaud          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_fill(char **s1, char *s2, int *i)
{
	char	*sub;
	char	*tmp;
	int		sub_ln;
	int		tmp_ln;

	if ((tmp = ft_strchr(s2, '%')))
		sub_ln = tmp - s2;
	else
		sub_ln = ft_strlen(s2);
	if (!sub_ln)
		return ;
	sub = ft_substr(s2, 0, sub_ln);
	tmp_ln = ft_strlen(*s1) + sub_ln;
	tmp = malloc(sizeof(char) * (tmp_ln + 1));
	if (!tmp)
		return ;
	ft_bzero(tmp, tmp_ln);
	ft_strlcpy(tmp, *s1, ft_strlen(*s1) + 1);
	ft_strlcat(tmp, sub, tmp_ln + 1);
	free(*s1);
	free(sub);
	*s1 = tmp;
	*i += sub_ln - 1;
	return ;
}

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
