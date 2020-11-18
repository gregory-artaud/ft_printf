/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:37:54 by gartaud           #+#    #+#             */
/*   Updated: 2020/11/18 16:55:21 by gartaud          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# define STDOUT 1
# include "../libft/libft.h"

int		ft_printf(const char *s, ...);
void	ft_fill(char **s1, char *s2, int *i);

#endif
