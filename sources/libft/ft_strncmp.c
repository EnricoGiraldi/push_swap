/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engirald <engirald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:10:10 by engirald          #+#    #+#             */
/*   Updated: 2023/08/10 20:10:11 by engirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	dev;
	size_t			i;
	unsigned char	*s3;
	unsigned char	*s4;

	s3 = (unsigned char *) s1;
	s4 = (unsigned char *) s2;
	dev = 0;
	i = 0;
	if (n == 0)
		return (0);
	while ((s3[i] || s4[i]) && (i < n - 1) && s3[i] == s4[i])
		i++;
	dev = s3[i] - s4[i];
	return (dev);
}
