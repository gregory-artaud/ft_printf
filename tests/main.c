/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:09:13 by gartaud           #+#    #+#             */
/*   Updated: 2020/12/04 10:50:19 by gartaud          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include "../includes/ft_printf.h"

int		main(void)
{
	//printf("\n=== ENTREE FT_PRINTF ===\n");
	//ft_printf("Hello %23$-*55$.35cWorld !\n");
	//ft_printf("Hello %42.*cWorld !\n", 1789);
	ft_printf("mine : %c", '\0');
	printf("\nreal : %c\n", '\0');
	//printf("\n=== SORTIE FT_PRINTF ===\n");
	return (0);
}
