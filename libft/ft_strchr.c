/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:21:43 by pecampos          #+#    #+#             */
/*   Updated: 2022/05/27 12:07:54 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	int	x;

	x = 0;
	while (string[x])
	{
		if (string[x] == (c % 256))
			return ((char *)(string + x));
		x++;
	}
	if (string[x] == (c % 256))
		return ((char *)(string + x));
	return (0);
}

/* 
int	main(void)
{
	char	*src;

	printf("%s", ft_strchr(src, '\n' + 256));
}
 */