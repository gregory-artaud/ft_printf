/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 19:04:02 by gregory           #+#    #+#             */
/*   Updated: 2020/11/03 17:31:50 by gregory          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	char			*s;
	char			*d;

	s = (char *)src;
	d = (char *)dest;
	i = -1;
	while (++i < n)
	{
		d[i] = s[i];
		if (s[i] == (char)c)
			return (dest + i + 1);
	}
	return (NULL);
}
