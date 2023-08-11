/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engirald <engirald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:08:17 by engirald          #+#    #+#             */
/*   Updated: 2023/08/10 20:08:18 by engirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dest, const void	*src, size_t	n)
{
	if (dest > src)
	{
		while (n--)
		{
			((char *)dest)[n] = ((char *)src)[n];
		}
	}
	else if (dest < src)
		ft_memcpy(dest, src, n);
	return (dest);
}
