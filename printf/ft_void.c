/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_void.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:45:53 by pecampos          #+#    #+#             */
/*   Updated: 2022/06/10 14:20:25 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_void(unsigned long long n)
{
	int	x;

	x = 0;
	while (n != 0)
	{
		n = n / 16;
		x++;
	}
	return (x);
}

char	ft_select(int res)
{
	char	c;

	if (res == 10)
		return ('a');
	if (res == 11)
		return ('b');
	if (res == 12)
		return ('c');
	if (res == 13)
		return ('d');
	if (res == 14)
		return ('e');
	if (res == 15)
		return ('f');
	c = res + 48;
	return (c);
}

char	*ft_void(unsigned long long n)
{
	int		cont;
	char	*dest;
	int		resto;
	int		lon;

	cont = 0;
	lon = ft_len_void(n);
	dest = (char *)malloc((ft_len_void(n) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (n != 0)
	{
		resto = n % 16;
		dest[ft_len_void(n) - 1] = ft_select(resto);
		n = n / 16;
	}
	dest[lon] = 0;
	return (dest);
}
