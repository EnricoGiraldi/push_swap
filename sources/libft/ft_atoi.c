/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engirald <engirald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:06:00 by engirald          #+#    #+#             */
/*   Updated: 2023/08/10 20:06:01 by engirald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		n;
	size_t	numero;

	i = 0;
	numero = 0;
	n = 1;
	while (str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			n = -1;
	while (str[i] >= 48 && str[i] <= 57)
		numero = numero * 10 + (str[i++] - '0');
	if (numero > 2147483647)
	{
		write(STDIN_FILENO, "Error", 5);
		write(STDIN_FILENO, "\n", 2);
		exit (1);
	}
	return (n * numero);
}
