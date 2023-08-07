/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:03:38 by pecampos          #+#    #+#             */
/*   Updated: 2022/05/09 09:43:15 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(char *c, unsigned long n)
{
	unsigned long		cont;

	cont = 0;
	while (cont != n)
	{
		c[cont] = 0;
		cont++;
	}
}
/*
int	main(void)
{
	char	str[] = "patata";

    printf("%s\n",str);
	ft_bzero(str,1);
    printf("%c",str[1]);
}
*/