/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engirald <engirald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:06:54 by engirald          #+#    #+#             */
/*   Updated: 2023/08/10 20:06:55 by engirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_tostr(char *new, unsigned int number, size_t len)
{
	while (number > 0)
	{
		new[len] = 48 + (number % 10);
		number = number / 10;
		len--;
	}
	return (new);
}

size_t	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*new;
	size_t			len;
	unsigned int	number;

	new = malloc(sizeof(char) * ft_intlen(n) + 1);
	len = ft_intlen(n);
	if (!new)
		return (0);
	if (n == 0)
		new[0] = '0';
	new[len--] = '\0';
	if (n < 0)
	{
		number = n * -1;
		new[0] = '-';
	}
	else
		number = n;
	new = ft_tostr(new, number, len);
	return (new);
}
