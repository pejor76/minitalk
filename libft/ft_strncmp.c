/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:21:43 by pecampos          #+#    #+#             */
/*   Updated: 2022/05/09 09:41:38 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, unsigned long n)
{
	unsigned long	x;

	x = 0;
	while (x < n && str1[x] && str2[x])
	{
		if (str1[x] != str2[x])
		{
			return ((unsigned char)str1[x] - (unsigned char)str2[x]);
		}
		x++;
	}
	if (str1[x] != str2[x] && x < n)
		return ((unsigned char)str1[x] - (unsigned char)str2[x]);
	return (0);
}
/*
int	main(void)
{
	char	src1[] = "abcdef";
	char	src2[] = "abcdefghijklmnop";

	printf("%d", ft_strncmp(src1, src2, 6));
}
*/