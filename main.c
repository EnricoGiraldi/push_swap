/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engirald <engirald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:38:08 by engirald          #+#    #+#             */
/*   Updated: 2023/08/11 14:38:09 by engirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	werror(void)
{
	ft_putstr_fd("Error", FD);
	write(FD, "\n", 1);
	exit (1);
}

int	its_sorted(t_my_list **stack)
{
	t_my_list	*aux;

	aux = lstfirst(*stack);
	while (aux->next)
	{
		if (aux->content > aux->next->content)
			return (1);
		aux = aux->next;
	}
	return (0);
}

void	method(t_my_list **stacka, t_my_list **stackb)
{
	if (my_lstsize((*stacka)) <= 5)
	{
		if (my_lstsize((*stacka)) == 5)
			sort_five(stacka, stackb);
		if (my_lstsize((*stacka)) == 4)
			sort_four(stacka, stackb);
		if (my_lstsize((*stacka)) == 3)
			sort_three(stacka);
		if (my_lstsize((*stacka)) == 2)
			sa(stacka);
	}
	if (my_lstsize((*stacka)) > 5 && my_lstsize((*stacka)) <= 10)
		sort_leq_dec(stacka, stackb);
	if (my_lstsize((*stacka)) > 10)
		radix(stacka, stackb);
	return ;
}

int	main(int argc, char **argv)
{
	t_my_list	**stacka;
	t_my_list	**stackb;

	stacka = ft_calloc(sizeof(t_my_list), 1);
	stackb = ft_calloc(sizeof(t_my_list), 1);
	check_argvs(argc, argv, stacka);
	if (its_sorted(stacka) == 1)
		method(stacka, stackb);
	if (its_sorted(stacka) == 1)
		werror();
}
