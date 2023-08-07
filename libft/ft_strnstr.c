/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:21:43 by pecampos          #+#    #+#             */
/*   Updated: 2022/05/11 09:47:42 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	unsigned long	i;
	unsigned long	x;
	char			*pal;

	i = 0;
	pal = (char *)str;
	if (to_find[0] == '\0')
	{
		return (pal);
	}
	while (pal[i] != '\0' && i < n)
	{
		x = 0;
		while (pal[i + x] == to_find[x] && pal[i + x] != '\0' && i + x < n)
		{
			if (to_find[x + 1] == '\0')
			{
				return (&pal[i]);
			}
			x++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	src1[] = "pacolsdaas";
	char	src2[] = "ac";

	printf("%s", strnstr(src1, src2, 3));
}
*/