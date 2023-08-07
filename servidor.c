/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   servidor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 13:09:28 by pecampos          #+#    #+#             */
/*   Updated: 2023/07/10 16:30:28 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_handler(int signal, siginfo_t *info, void *s)
{
	static int	bit;
	static int	x;

	(void)info;
	(void)s;
	if (signal == SIGUSR1)
	{
		x = x | (0x01 << bit);
	}
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", x);
		x = 0;
		bit = 0;
	}
}

int	main(int argc, char **argv)
{
	int					pid;
	struct sigaction	act;

	pid = getpid();
	act.sa_sigaction = ft_handler;
	(void)argv;
	if (argc != 1)
		ft_printf("Error");
	else
	{
		pid = getpid();
		ft_printf("%d", pid);
		ft_printf("\nESPERANDO A QUE SE ME ENVIE UN MENSAJE\n");
		while (argc == 1)
		{
			sigaction(SIGUSR1, &act, NULL);
			sigaction(SIGUSR2, &act, NULL);
			pause();
		}
	}
	return (0);
}
