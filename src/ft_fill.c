/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:54:23 by gartaud           #+#    #+#             */
/*   Updated: 2020/11/18 16:55:11 by gartaud          ###   ########lyon.fr   */
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
