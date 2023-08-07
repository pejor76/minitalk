/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:21:43 by pecampos          #+#    #+#             */
/*   Updated: 2022/05/11 09:16:31 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int	x;
	int	res;

	res = -1;
	x = 0;
	while (string[x])
	{
		if (string[x] == (c % 256))
			res = x;
		x++;
	}
	if (string[x] == (c % 256))
		res = x;
	if (res != -1)
	{
		return ((char *)(string + res));
	}
	return (0);
}
/*
int	main(void)
{
	char	src[] = "Is this thing";

	printf("%s", ft_strrchr(src, 't'));
}
*/