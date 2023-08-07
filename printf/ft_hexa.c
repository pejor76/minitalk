/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:45:53 by pecampos          #+#    #+#             */
/*   Updated: 2022/06/10 14:24:47 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_length(unsigned int n)
{
	int	x;

	x = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 16;
		x++;
	}
	return (x);
}

char	ft_select_may(int res)
{
	char	c;

	if (res == 10)
		return ('A');
	if (res == 11)
		return ('B');
	if (res == 12)
		return ('C');
	if (res == 13)
		return ('D');
	if (res == 14)
		return ('E');
	if (res == 15)
		return ('F');
	c = res + 48;
	return (c);
}

char	ft_select_min(int res)
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

char	*ft_hexa(unsigned int n, int form)
{
	int		cont;
	char	*dest;
	int		resto;
	int		lon;

	cont = 0;
	lon = ft_length(n);
	dest = (char *)malloc((ft_length(n) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	if (n == 0)
		dest[0] = '0';
	while (n != 0)
	{
		resto = n % 16;
		if (form == 1)
			dest[ft_length(n) - 1] = ft_select_may(resto);
		else if (form == -1)
			dest[ft_length(n) - 1] = ft_select_min(resto);
		n = n / 16;
	}
	dest[lon] = 0;
	return (dest);
}
