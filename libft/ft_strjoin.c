/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:03:38 by pecampos          #+#    #+#             */
/*   Updated: 2022/05/25 17:32:54 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned long	index;
	char			*dest;

	index = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	dest = (char *)malloc((ft_strlen((char *)s1) + ft_strlen((char *)s2))
			* sizeof(char) + 1);
	if (!dest)
		return (NULL);
	while (index < ft_strlen((char *)s1) + ft_strlen((char *)s2))
	{
		if (index < ft_strlen((char *)s1))
		{
			dest[index] = s1[index];
			index++;
		}
		else
		{
			dest[index] = s2[index - ft_strlen((char *)s1)];
			index++;
		}
	}
	dest[index] = '\0';
	return (dest);
}

/* int	main(void)
{
	char	*str;
	char	str2[] = " largas";

	printf("%s", ft_strjoin(str, str2));
} */
