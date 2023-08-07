/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selection.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:45:53 by pecampos          #+#    #+#             */
/*   Updated: 2022/10/17 17:24:41 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_str(char *s)
{
	int		x;
	char	c;

	x = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[x] != '\0')
	{
		c = s[x];
		write(1, &c, 1);
		x++;
	}
	return (x);
}

int	ft_int(int num)
{
	int		x;
	char	c;
	char	*str;

	str = ft_itoa(num);
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

int	ft_hex(unsigned int num, int form)
{
	int		x;
	char	c;
	char	*str;

	str = ft_hexa(num, form);
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
