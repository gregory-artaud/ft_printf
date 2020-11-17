/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 08:09:42 by gregory           #+#    #+#             */
/*   Updated: 2020/11/04 11:45:45 by gregory          ###   ########lyon.fr   */
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

static int		ft_strisin(char const *s, char const c)
{
	unsigned int	i;
	unsigned int	j;
	size_t			s_len;

	i = 0;
	j = 0;
	s_len = my_strlen(s);
	while (i < s_len)
	{
		if (s[i] == c)
			j++;
		i++;
	}
	return (j);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	size_t			s_len;
	size_t			new_s_len;
	char			*new_s;

	i = 0;
	s_len = my_strlen(s1);
	while (ft_strisin(set, s1[i]))
		i++;
	j = s_len - 1;
	while ((ft_strisin(set, s1[j])) && (j > i))
		j--;
	new_s_len = j - i + 1;
	new_s = malloc(sizeof(char) * (new_s_len + 1));
	j = -1;
	while (++j < new_s_len)
		new_s[j] = s1[i + j];
	new_s[j] = 0;
	return (new_s);
}
