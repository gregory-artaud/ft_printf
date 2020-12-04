/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:09:13 by gartaud           #+#    #+#             */
/*   Updated: 2020/12/04 18:42:25 by gartaud          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include "../includes/ft_printf.h"

int		main(void)
{
	//printf("\n=== ENTREE FT_PRINTF ===\n");
	//ft_printf("%% *.5i 42 == |% *.5i|\n", 4, 42);
	//printf("%% *.5i 42 == |% *.5i|\n", 4, 42);
	printf("%*s", -32, "abc");
	//ft_printf("% *.5i", 42);
	//printf("\n=== SORTIE FT_PRINTF ===\n");

	return (0);
}
