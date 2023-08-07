/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:45:53 by pecampos          #+#    #+#             */
/*   Updated: 2023/04/03 13:02:15 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_control(char c, va_list arg)
{
	int	x;

	x = 0;
	if (c == 'c')
		return (ft_char(va_arg(arg, int)));
	else if (c == 's')
		return (ft_str(va_arg(arg, char *)));
	else if (c == 'p')
		return (ft_put_void(va_arg(arg, unsigned long long)));
	else if (c == 'd')
		return (ft_int(va_arg(arg, int)));
	else if (c == 'i')
		return (ft_int(va_arg(arg, int)));
	else if (c == 'u')
		return (ft_unsigned(va_arg(arg, unsigned int)));
	else if (c == 'x')
		return (ft_hex(va_arg(arg, unsigned int), -1));
	else if (c == 'X')
		return (ft_hex(va_arg(arg, unsigned int), 1));
	else if (c == '%')
		return (ft_exception());
	return (0);
}

int	ft_printf(char const *text, ...)
{
	int		i;
	int		res;
	char	c;
	va_list	arg;

	i = 0;
	res = 0;
	va_start(arg, text);
	while (text[i] != '\0')
	{
		if (text[i] == '%')
		{
			i++;
			res = ft_control(text[i], arg) + res;
			i++;
		}
		else
		{
			c = text[i];
			write(1, &c, 1);
			res++;
			i++;
		}
	}
	return (res);
}
