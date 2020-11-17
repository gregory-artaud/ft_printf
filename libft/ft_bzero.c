/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 15:18:15 by gregory           #+#    #+#             */
/*   Updated: 2020/11/03 17:16:50 by gregory          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*memset(void *s, int c, size_t n)
{
	unsigned int	i;
	char			*str;

	str = (char *)s;
	i = -1;
	while (++i < n)
		str[i] = (char)c;
	return (s);
}

void		ft_bzero(void *s, size_t n)
{
	memset(s, 0, n);
}
