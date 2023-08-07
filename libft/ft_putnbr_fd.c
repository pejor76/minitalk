/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:03:38 by pecampos          #+#    #+#             */
/*   Updated: 2022/05/09 15:36:54 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		cont;
	char	c;

	cont = 1;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		n = 0;
		cont = -1;
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	while ((n / cont) > 9 && cont != -1)
		cont = cont * 10;
	while (cont != 0 && cont != -1)
	{
		c = (n / cont) + 48;
		write(fd, &c, 1);
		n = n % cont;
		cont = cont / 10;
	}
}
/*
int	main(void)
{
	ft_putnbr_fd(52, 1);
}
*/