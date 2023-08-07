/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:03:38 by pecampos          #+#    #+#             */
/*   Updated: 2022/05/09 09:42:08 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	cont;

	if (s == 0)
		return ;
	cont = 0;
	while (s[cont] != '\0')
	{
		write(fd, s + cont, 1);
		cont++;
	}
}
/*
int	main(void)
{
	char str[] = "patata";
	ft_putstr_fd(str , 2);
}
*/