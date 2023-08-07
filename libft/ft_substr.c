/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:03:38 by pecampos          #+#    #+#             */
/*   Updated: 2022/05/11 10:21:55 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		index;
	size_t		j;
	char		*dest;

	index = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	if (len > ft_strlen(s))
		dest = (char *)malloc(sizeof(char) * (ft_strlen(s)));
	else
		dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (s[index])
	{
		if (index >= start && j < len)
		{
			dest[j] = s[index];
			j++;
		}
		index++;
	}
	dest[j] = 0;
	return (dest);
}
/*
int	main(void)
{
	char	str[] = "1";

	printf("|%s|", ft_substr(str, 42, 420000000));
}
*/