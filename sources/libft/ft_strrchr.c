/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engirald <engirald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:10:22 by engirald          #+#    #+#             */
/*   Updated: 2023/08/10 20:10:58 by engirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*fin;

	fin = (char *)s + ft_strlen(s);
	while (fin > s && *fin != (unsigned char)c)
		fin--;
	if (*fin == (unsigned char)c)
		return (fin);
	return (0);
}
