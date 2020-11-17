/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 16:30:51 by gregory           #+#    #+#             */
/*   Updated: 2020/11/04 11:49:07 by gregory          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char const *s, size_t n)
{
	char *res;

	res = malloc(sizeof(char) * n + 1);
	ft_memcpy(res, s, n);
	res[n] = 0;
	return (res);
}
