/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:03:38 by pecampos          #+#    #+#             */
/*   Updated: 2022/05/11 10:34:41 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_cont_in(char const *s1, char const *set, int index2)
{
	int	index;
	int	cont;
	int	comp;

	cont = 0;
	index = 0;
	while (s1[index2] != '\0' && set[index] != '\0')
	{
		index = 0;
		comp = 0;
		while (set[index] != '\0' && comp == 0)
		{
			if (set[index] == s1[index2])
			{
				cont++;
				comp++;
			}
			else
				index++;
		}
		index2++;
	}
	if (cont == (int)ft_strlen((char *) s1))
		return (0);
	return (cont);
}

int	ft_cont_end(char const *s1, char const *set, int index2)
{
	int	index;
	int	cont;
	int	comp;

	cont = ft_strlen((char *)s1) - 1;
	index = 0;
	while (s1[index2] != '\0' && set[index] != '\0')
	{
		index = 0;
		comp = 0;
		while (set[index] != '\0' && comp == 0)
		{
			if (set[index] == s1[index2])
			{
				cont--;
				comp++;
			}
			else
				index++;
		}
		index2--;
	}
	return (cont);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned long	index;
	int				index2;
	char			*dest;
	int				start;
	int				end;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup((char *)s1));
	index = 0;
	index2 = 0;
	start = ft_cont_in(s1, set, 0);
	end = ft_cont_end(s1, set, ft_strlen(((char *)s1)) - 1);
	if (end == -1)
		return (ft_strdup(""));
	dest = ft_substr(s1, start, end - start + 1);
	return (dest);
}
/*
int	main(void)
{
	char	str[] = "tripouille";

	printf("%s", ft_strtrim(str, " x"));
}
*/