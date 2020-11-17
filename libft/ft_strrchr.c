/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 23:15:59 by gregory           #+#    #+#             */
/*   Updated: 2020/11/04 11:42:16 by gregory          ###   ########lyon.fr   */
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

char			*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	int				last_occurrence;

	last_occurrence = -1;
	i = -1;
	while (++i <= my_strlen(s))
		if (s[i] == c)
			last_occurrence = i;
	if (last_occurrence != -1)
		return ((char *)s + last_occurrence);
	return (NULL);
}
