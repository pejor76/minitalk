/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cliente.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:39:04 by pecampos          #+#    #+#             */
/*   Updated: 2023/07/10 14:25:50 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

/* void	confirm(int signal)
{
	static int	bit;
	static int	x;
	static int	ceros;

	ceros = 0;
	if (signal == SIGUSR1)
		x = x + pot(10, bit);
	else if (signal == SIGUSR2)
		x = x + 0;
	bit++;
	if (bit == 8)
	{
		ceros = totceros(x);
		while (ceros != 0)
		{
			ft_printf("0");
			ceros--;
		}
		ft_printf("%d", x);
		bit = 0;
		x = 0;
	}
} */

void	send_bits(int pid, char i)
{
	int	bits;

	bits = 0;
	while (bits < 8)
	{
		if ((i & (0x01 << bits)) != 0)
		{
			kill(pid, SIGUSR1);
		}
		else
		{
			kill(pid, SIGUSR2);
		}
		usleep(200);
		bits++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		while (argv[2][i] != '\0')
		{
			send_bits(pid, argv[2][i]);
			i++;
		}
	}
	else
	{
		ft_printf("NO SE HA INTRODUCIDO EL NUMERO CORRECTO DE PARAMETROS\n");
	}
	return (0);
}
