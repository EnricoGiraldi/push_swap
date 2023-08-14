/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engirald <engirald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:12:05 by engirald          #+#    #+#             */
/*   Updated: 2023/08/14 16:01:18 by engirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	swap(t_my_list **stack)
{
	int	first;
	int	second;

	first = (*stack)->content;
	(*stack) = (*stack)->next;
	second = (*stack)->content;
	(*stack) = (*stack)->prev;
	(*stack)->content = second;
	(*stack) = (*stack)->next;
	(*stack)->content = first;
	(*stack) = (*stack)->prev;
}

void	sa(t_my_list **stack)
{
	swap(stack);
	ft_putstr_fd("sa", FD);
	write(FD, "\n", 1);
}

void	sb(t_my_list **stack)
{
	swap(stack);
	ft_putstr_fd("sb", FD);
	write(FD, "\n", 1);
}

void	ss(t_my_list **stacka, t_my_list **stackb)
{
	swap(stacka);
	swap(stackb);
	ft_putstr_fd("ss", FD);
	write(FD, "\n", 1);
}
