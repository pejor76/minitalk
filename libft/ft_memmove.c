/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:03:38 by pecampos          #+#    #+#             */
/*   Updated: 2022/05/09 09:44:24 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, unsigned long num)
{
	int	i;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	if (s1 > s2)
	{
		i = (int)num - 1;
		while (i >= 0)
		{
			*(char *)(s1 + i) = *(char *)(s2 + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)num)
		{
			*(char *)(s1 + i) = *(char *)(s2 + i);
			i++;
		}
	}
	return (s1);
}
/*
int	main(void)
{
	char	csrc[100] = "Geeksfor";

	printf("%lu ", strlen(csrc) + 1);
	printf("%s ", csrc + 5);
	ft_memmove(csrc + 5, csrc, strlen(csrc) + 1);
	printf("%s", csrc);
}
*/