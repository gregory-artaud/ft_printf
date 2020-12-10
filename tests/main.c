/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:09:13 by gartaud           #+#    #+#             */
/*   Updated: 2020/12/10 14:15:40 by gartaud          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <limits.h>
#include <stdio.h>
#include "../includes/ft_printf.h"

int		main(void)
{
	//printf("\n=== ENTREE FT_PRINTF ===\n");
	//ft_printf("%% *.5i 42 == |% *.5i|\n", 4, 42);
	//printf("%% *.5i 42 == |% *.5i|\n", 4, 42);
	ft_printf(" *%-*.*u* *%*.*u* \n", 6, 2, 102, 10, 21, -101);
	printf(" *%-*.*u* *%*.*u* ", 6, 2, 102, 10, 21, -101);
	//ft_printf("% *.5i", 42);
	//printf("\n=== SORTIE FT_PRINTF ===\n");

	return (0);
}
