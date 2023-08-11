/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engirald <engirald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:10:16 by engirald          #+#    #+#             */
/*   Updated: 2023/08/10 20:10:17 by engirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len2;
	char	*new;

	i = 0;
	j = 0;
	new = (char *)haystack;
	len2 = ft_strlen(needle);
	if (len2 == 0 || haystack == needle)
		return (new);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (new[i + j] && new[j]
			&& new[i + j] == needle[j] && i + j < len)
			j++;
		if (j == len2)
			return (new + i);
		i++;
	}
	return (0);
}
