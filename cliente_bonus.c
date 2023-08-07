/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cliente_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:24:57 by pecampos          #+#    #+#             */
/*   Updated: 2023/07/10 16:11:08 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

/* int	pot(int num1, int num2)
{
	int	x;

	x = 1;
	while (num2 != 0)
	{
		x = x * num1;
		num2--;
	}
	return (x);
}

int	totceros(int num)
{
	int	x;
	int	res;

	x = 10;
	res = 0;
	while (num / x != 0)
	{
		x = x * 10;
		res++;
	}
	return (7 - res);
}

void	confirm(int signal)
{
	static int	bit;
	static int	x;
	static int	ceros;

	ceros = 0;
	if (signal == SIGUSR1)
		x = x + pot(10, bit);
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
		ceros = 0;
	}
} */

void	confirm(int signal)
{
	if (signal == SIGUSR1)
		ft_printf("RECIBIDO\n");
}

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
			signal(SIGUSR1, confirm);
			signal(SIGUSR2, confirm);
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
