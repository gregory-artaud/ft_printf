/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 23:03:50 by gregory           #+#    #+#             */
/*   Updated: 2020/11/04 11:42:27 by gregory          ###   ########lyon.fr   */
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

char			*ft_strchr(const char *s, int c)
{
	unsigned int i;

	i = -1;
	while (++i <= my_strlen(s))
		if (s[i] == (char)c)
			return ((char *)s + i);
	return (NULL);
}
