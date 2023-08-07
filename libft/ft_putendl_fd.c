/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:03:38 by pecampos          #+#    #+#             */
/*   Updated: 2022/05/09 09:42:13 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	cont;

	cont = 0;
	if (s == 0)
		return ;
	while (s[cont] != '\0')
	{
		write(fd, s + cont, 1);
		cont++;
	}
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	char str[] = "patata";
	ft_putendl_fd(str , 2);
}
*/