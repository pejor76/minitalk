/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selection2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:45:53 by pecampos          #+#    #+#             */
/*   Updated: 2022/06/15 14:07:20 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_void(unsigned long long num)
{
	int		x;
	char	c;
	char	*str;

	str = ft_void(num);
	x = 0;
	write(1, "0x", 2);
	if (num == 0)
	{
		write(1, "0", 1);
		x = 1;
	}
	else
	{
		while (str[x] != '\0')
		{
			c = str[x];
			write(1, &c, 1);
			x++;
		}
	}
	free(str);
	return (x + 2);
}

int	ft_unsigned(unsigned int num)
{
	int		x;
	char	c;
	char	*str;

	str = ft_uitoa(num);
	x = 0;
	while (str[x] != '\0')
	{
		c = str[x];
		write(1, &c, 1);
		x++;
	}
	free(str);
	return (x);
}

int	ft_exception(void)
{
	char	c;

	c = 37;
	write(1, &c, 1);
	return (1);
}
