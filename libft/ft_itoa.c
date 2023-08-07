/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:03:38 by pecampos          #+#    #+#             */
/*   Updated: 2022/10/13 18:31:31 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len_num(int n)
{
	int	cont;

	cont = 0;
	if (n == -2147483648)
	{
		cont = 2;
		n = 147483648;
	}
	else if (n < 0)
	{
		cont++;
		n = n * -1;
	}
	while (n >= 0)
	{
		cont++;
		n = n / 10;
		if (n == 0)
			n = -1;
	}
	return (cont);
}

int	ft_is_neg(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

int	ft_conv_pos(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

int	ft_special(int n)
{
	if (n == -2147483648)
		return (10);
	return (1);
}

char	*ft_itoa(int n)
{
	int		cont;
	char	*dest;
	int		x;
	int		in;

	cont = 0;
	x = 1;
	in = n;
	dest = (char *)malloc((ft_len_num(n) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (ft_conv_pos(in) * (n / (x * ft_special(n))) > 9)
		x = x * 10;
	x = x * ft_special(in);
	while (cont + ft_is_neg(in) < ft_len_num(in))
	{
		dest[cont + ft_is_neg(in)] = (ft_conv_pos(in) * (n / x)) + 48;
		n = (n % x);
		x = x / 10;
		cont++;
	}
	dest[cont + ft_is_neg(in)] = 0;
	if (ft_is_neg(in) == 1)
		dest[0] = '-';
	return (dest);
}
