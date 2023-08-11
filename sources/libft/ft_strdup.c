/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engirald <engirald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:09:15 by engirald          #+#    #+#             */
/*   Updated: 2023/08/10 20:09:16 by engirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str2;
	int		i;

	i = 0;
	str2 = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!str2)
		return (0);
	while (s1[i])
	{
		str2[i] = ((char *)s1)[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
