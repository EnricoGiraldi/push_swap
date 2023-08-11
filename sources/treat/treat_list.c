/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engirald <engirald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:12:52 by engirald          #+#    #+#             */
/*   Updated: 2023/08/10 20:12:53 by engirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_my_list	*lstlast(t_my_list *lst)
{
	t_my_list			*lastelem;

	if (!lst)
		lastelem = lst;
	while (lst)
	{
		lastelem = lst;
		lst = lst->next;
	}
	return (lastelem);
}

int	my_lstsize(t_my_list *lst)
{
	unsigned int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

t_my_list	*lstfirst(t_my_list *lst)
{
	t_my_list			*firstelem;

	if (lst->prev == NULL)
		firstelem = lst;
	while (lst)
	{
		firstelem = lst;
		lst = lst->prev;
	}
	return (firstelem);
}

int	addlist(t_my_list **stack, int content)
{
	t_my_list	*new;
	t_my_list	*aux;

	new = malloc(sizeof(t_my_list));
	if (!new)
		return (1);
	if (*stack == 0)
	{
		new->content = content;
		new->next = NULL;
		new->prev = NULL;
		*stack = new;
		return (0);
	}
	else
	{
		aux = lstlast(*(stack));
		aux->next = new;
		new->content = content;
		new->next = NULL;
		new->prev = aux;
	}
	return (0);
}
