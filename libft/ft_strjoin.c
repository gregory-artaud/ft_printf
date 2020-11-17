/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 07:58:33 by gregory           #+#    #+#             */
/*   Updated: 2020/11/04 11:36:33 by gregory          ###   ########lyon.fr   */
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

char			*ft_strjoin(char const *s1, char const *s2)
{
	char			*concat;
	size_t			s1_len;
	size_t			s2_len;
	unsigned int	i;

	s1_len = my_strlen(s1);
	s2_len = my_strlen(s2);
	concat = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	i = -1;
	while (++i < s1_len + s2_len)
		if (i < s1_len)
			concat[i] = s1[i];
		else
			concat[i] = s2[i - s1_len];
	concat[i] = 0;
	return (concat);
}
