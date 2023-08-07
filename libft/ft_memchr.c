/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:21:43 by pecampos          #+#    #+#             */
/*   Updated: 2022/05/09 09:42:30 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *string, int c, size_t n)
{
	unsigned long	x;
	unsigned char	*p;

	x = 0;
	p = (unsigned char *) string;
	while (x < n)
	{
		if (p[x] == (unsigned char)c)
		{
			return ((unsigned char *)(p + x));
		}
		x++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	src[] = "/|\x12\xff\x09\x42\2002\42|\\";

	printf(" %s", ft_memchr(src, '\200', 10));
}
*/