/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:03:38 by pecampos          #+#    #+#             */
/*   Updated: 2022/05/09 09:42:19 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t num)
{
	size_t	cont;

	cont = 0;
	while (cont < num)
	{
		((char *)str)[cont] = (char)c;
		cont++;
	}
	return (str);
}
/*
int	main(void)
{
	char *b1 = (char*)malloc(sizeof(char) * (0xF0000 + 1));

	*b1 = 0;
    ft_memset(b1, 'A', 0xF0000);
	printf("   %s", b1);
}
*/