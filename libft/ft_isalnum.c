/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 22:23:19 by gregory           #+#    #+#             */
/*   Updated: 2020/11/03 17:46:08 by gregory          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		isalpha(int c)
{
	return (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')));
}

static int		isdigit(int c)
{
	return ((c >= '0') && (c <= '9'));
}

int				ft_isalnum(int c)
{
	return (isalpha(c) || isdigit(c));
}
