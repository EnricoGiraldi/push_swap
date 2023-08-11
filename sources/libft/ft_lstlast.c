/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engirald <engirald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:07:26 by engirald          #+#    #+#             */
/*   Updated: 2023/08/10 20:07:27 by engirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list			*lastelem;

	if (!lst)
		lastelem = lst;
	while (lst)
	{
		lastelem = lst;
		lst = lst->next;
	}
	return (lastelem);
}
