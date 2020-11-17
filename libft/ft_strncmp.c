/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 23:27:50 by gregory           #+#    #+#             */
/*   Updated: 2020/11/03 21:31:04 by gregory          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]) && (i < n - 1))
		i++;
	if (n)
		return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
	return (0);
}
