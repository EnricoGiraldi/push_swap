/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engirald <engirald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:07:38 by engirald          #+#    #+#             */
/*   Updated: 2023/08/10 20:07:39 by engirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newelm;

	newelm = (t_list *)malloc(sizeof(*newelm));
	if (!newelm)
		return (NULL);
	newelm->content = content;
	newelm->next = NULL;
	return (newelm);
}
