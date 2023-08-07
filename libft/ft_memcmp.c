/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:21:43 by pecampos          #+#    #+#             */
/*   Updated: 2022/05/09 09:42:27 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned long		x;
	char				*s1;
	char				*s2;

	s1 = (char *)str1;
	s2 = (char *)str2;
	x = 0;
	while (x < n)
	{
		if (s1[x] != s2[x])
		{
			return ((unsigned char)s1[x] - (unsigned char)s2[x]);
		}
		x++;
	}
	return (0);
}
/*
int	main(void)
{
	char	src[] = "\xff\xaa\xde\xffMACOSX\xff";
	char	src1[] = "\xff\xaa\xde\x02";

	printf("%d", memcmp(src, src1, 8));
	printf(" %d", ft_memcmp(src, src1, 8));
}
*/