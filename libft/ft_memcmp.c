/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 19:57:24 by gregory           #+#    #+#             */
/*   Updated: 2020/11/03 17:40:47 by gregory          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*s1c;
	unsigned char	*s2c;

	s1c = (unsigned char*)s1;
	s2c = (unsigned char*)s2;
	i = -1;
	while (++i < n)
		if (s1c[i] != s2c[i])
			return (s1c[i] - s2c[i]);
	return (0);
}
