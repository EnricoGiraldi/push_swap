/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engirald <engirald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:11:45 by engirald          #+#    #+#             */
/*   Updated: 2023/08/14 16:00:13 by engirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	not_empty(t_my_list **src, t_my_list **dest);

static void	remove_to_empty(t_my_list **stack);

static void	remove_top(t_my_list **stack);

void	pa(t_my_list **stacka, t_my_list **stackb)
{
	int	first_b;
	int	size_b;

	size_b = my_lstsize(*stackb);
	if ((*stackb) == NULL)
		return ;
	if ((*stacka) != NULL)
		not_empty(stackb, stacka);
	if ((*stacka) == NULL)
	{
		first_b = (*stackb)->content;
		addlist(stacka, first_b);
	}
	if (size_b == 1)
		remove_to_empty(stackb);
	else
		remove_top(stackb);
	ft_putstr_fd("pa", FD);
	write(FD, "\n", 1);
}

void	pb(t_my_list **stacka, t_my_list **stackb)
{
	int	first_a;
	int	size_a;

	size_a = my_lstsize(*stacka);
	if ((*stacka) == NULL)
		return ;
	if ((*stackb) != NULL)
		not_empty(stacka, stackb);
	if ((*stackb) == NULL)
	{
		first_a = (*stacka)->content;
		addlist(stackb, first_a);
	}
	if (size_a == 1)
		remove_to_empty(stacka);
	else
		remove_top(stacka);
	ft_putstr_fd("pb", FD);
	write(FD, "\n", 1);
}

static void	not_empty(t_my_list **src, t_my_list **dest)
{
	t_my_list	*aux;
	t_my_list	*new;
	int			first;

	new = malloc(sizeof(t_my_list));
	if (!new)
		return ;
	first = (*src)->content;
	aux = (*dest);
	new->content = first;
	new->next = aux;
	new->prev = NULL;
	aux->prev = new;
	(*dest) = new;
}

static void	remove_to_empty(t_my_list **stack)
{
	t_my_list	*aux;

	aux = (*stack)->next;
	(*stack)->content = 0;
	free(*stack);
	*stack = aux;
}

static void	remove_top(t_my_list **stack)
{
	t_my_list	*aux;

	aux = (*stack);
	(*stack) = aux->next;
	free(aux);
	(*stack)->prev = NULL;
}
