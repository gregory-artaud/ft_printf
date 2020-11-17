/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregory <gregory@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 12:01:49 by gregory           #+#    #+#             */
/*   Updated: 2020/11/04 16:18:43 by gregory          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*my_lstlast(t_list *lst)
{
	t_list *current;

	current = lst;
	while (current->next)
		current = current->next;
	return (current);
}

void			ft_lstadd_back(t_list **alst, t_list *new)
{
	if (!*alst)
		*alst = new;
	else
		my_lstlast(*alst)->next = new;
	new->next = NULL;
	return ;
}
