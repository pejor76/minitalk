/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:03:38 by pecampos          #+#    #+#             */
/*   Updated: 2022/05/09 09:44:09 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t num)
{
	size_t	cont;

	cont = 0;
	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	while (cont < num)
	{
		((char *)s1)[cont] = *(char *)s2;
		s2++;
		cont++;
	}
	return (s1);
}
/*
int	main(void)
{
	//char	dest[] = "aaso";
	//char	src[] = "c";

	printf("   %s", ft_memcpy("a", "mas", 4));
}
*/