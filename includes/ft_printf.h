/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:37:54 by gartaud           #+#    #+#             */
/*   Updated: 2020/11/21 15:15:09 by gartaud          ###   ########lyon.fr   */
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

typedef struct	s_print
{
	char		*format;
	char		*out;
	va_list		*args;
}				t_print;


int		ft_printf(const char *s, ...);
void	ft_fill(t_print *p, int *i);
void	ft_convert(t_print *p, int *i);
t_print	*ft_pinit(va_list *args, char *format);
void	ft_pfree(t_print *p);
int		ft_spcln(char *s);
int		ft_isflag(char c);
int		ft_isconvert(char c);

#endif
