/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 16:10:16 by gregory           #+#    #+#             */
/*   Updated: 2020/11/04 16:28:50 by gregory          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*d;
	char			*s;

	d = (char *)dest;
	s = (char *)src;
	i = -1;
	while (++i < n)
		d[i] = s[i];
	return (dest);
}

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char	tmp[n];

	memcpy(tmp, src, n);
	memcpy(dest, tmp, n);
	return (dest);
}
