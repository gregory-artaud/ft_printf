/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 11:30:04 by gregory           #+#    #+#             */
/*   Updated: 2020/11/04 11:42:28 by gregory          ###   ########lyon.fr   */
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

char			*ft_strdup(const char *s)
{
	char			*new_string;
	unsigned int	i;

	new_string = malloc(sizeof(char) * (my_strlen(s) + 1));
	i = -1;
	while (s[++i])
		new_string[i] = s[i];
	new_string[i] = 0;
	return (new_string);
}
