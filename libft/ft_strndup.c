/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 16:30:51 by gartaud           #+#    #+#             */
/*   Updated: 2020/12/01 10:01:45 by gartaud          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	my_strlen(const char *s)
{
	unsigned int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char			*ft_strndup(char const *s, size_t n)
{
	char	*res;
	size_t	i;

	n = (n < my_strlen(s)) ? n : my_strlen(s);
	res = malloc(sizeof(char) * (n + 1));
	if (!res)
		return (0);
	i = 0;
	res[n] = 0;
	while (i < n && s[i])
	{
		res[i] = s[i];
		i++;
	}
	return (res);
}
