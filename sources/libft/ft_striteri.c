/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engirald <engirald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:09:20 by engirald          #+#    #+#             */
/*   Updated: 2023/08/10 20:32:37 by engirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s,
			void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!f || !s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
