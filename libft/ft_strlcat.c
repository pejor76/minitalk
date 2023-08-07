/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:45:53 by pecampos          #+#    #+#             */
/*   Updated: 2022/05/13 10:59:58 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	x;
	size_t	y;

	y = 0;
	i = 0;
	x = 0;
	while (src[i])
		i++;
	while (dest[x] && x < size)
	{
		x++;
		i++;
	}
	if (size > ft_strlen(dest) + 1 && size > 0)
	{
		while (x < size - 1 && src[y])
		{
			dest[x] = src[y];
			x++;
			y++;
		}
		dest[x] = 0;
	}
	return (i);
}
/*
int	main(void)
{
	char	palabra[] = "casop";
	char	dest[9] = "pas";

	printf("%s", dest);
	printf("\n");
	printf("%s", palabra);
	printf("\n");
	printf("%lu", strlcat(dest, palabra, 5));
	printf("\n");
	printf("%s", dest);
}
*/