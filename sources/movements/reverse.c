/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engirald <engirald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:11:52 by engirald          #+#    #+#             */
/*   Updated: 2023/08/14 16:00:43 by engirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	reverse(t_my_list **stack);

static void	remove_bottom(t_my_list **stack);

void	rra(t_my_list **stack)
{
	reverse(stack);
	remove_bottom(stack);
	ft_putstr_fd("rra", FD);
	write(FD, "\n", 1);
}

void	rrb(t_my_list **stack)
{
	reverse(stack);
	remove_bottom(stack);
	ft_putstr_fd("rrb", FD);
	write(FD, "\n", 1);
}

void	rrr(t_my_list **stacka, t_my_list **stackb)
{
	reverse(stacka);
	reverse(stackb);
	remove_bottom(stacka);
	remove_bottom(stackb);
	ft_putstr_fd("rrr", FD);
	write(FD, "\n", 1);
}

static void	remove_bottom(t_my_list **stack)
{
	t_my_list	*aux;
	t_my_list	*last;

	last = lstlast((*stack));
	aux = last->prev;
	aux->next = NULL;
	free(last);
}

static void	reverse(t_my_list **stack)
{
	t_my_list	*last;
	t_my_list	*aux;
	t_my_list	*new;

	new = malloc(sizeof(t_my_list));
	if (!new)
		return ;
	last = lstlast((*stack));
	aux = (*stack);
	new->content = last->content;
	new->next = aux;
	new->prev = NULL;
	aux->prev = new;
	(*stack) = new;
}
