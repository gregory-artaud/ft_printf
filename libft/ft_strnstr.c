/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 11:36:49 by gregory           #+#    #+#             */
/*   Updated: 2020/11/04 16:30:48 by gregory          ###   ########lyon.fr   */
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

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	size_t			llen;
	size_t			blen;

	llen = my_strlen(little);
	blen = my_strlen(big);
	if (llen == 0)
		return ((char *)big);
	i = 0;
	j = 0;
	while ((i < len) && (i < blen))
	{
		if (big[i] == little[j])
			j++;
		else
			j = 0;
		if (j == llen)
			return ((char *)big + i - llen + 1);
		i++;
	}
	return (NULL);
}
