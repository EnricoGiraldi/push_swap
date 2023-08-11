/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engirald <engirald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:09:31 by engirald          #+#    #+#             */
/*   Updated: 2023/08/10 20:32:20 by engirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	srcsize;
	size_t	destsize;

	srcsize = ft_strlen(src);
	destsize = ft_strlen(dest);
	if (size < destsize)
		return (srcsize + size);
	else
	{
		dest = dest + destsize;
		ft_strlcpy(dest, src, size - destsize);
		return (srcsize + destsize);
	}
}
