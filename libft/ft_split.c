/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:03:38 by pecampos          #+#    #+#             */
/*   Updated: 2022/05/18 10:25:23 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_while(char *str, char c)
{
	while (str[0] == c)
			str = ft_strchr(str, c) + 1;
	return (str);
}

int	ft_cont_del(char const *s, char c)
{
	int	x;
	int	cont;

	x = 0;
	cont = 0;
	while (s[x] != '\0')
	{
		if (s[x] != c && (s[x - 1] == '\0' || s[x - 1] == c || (s[x
						+ 1] == '\0' && cont == 0)))
		{
			cont++;
		}
		x++;
	}
	return (cont);
}

int	ft_long(char *src, char c)
{
	int	cont;

	cont = 1;
	if (ft_strchr(src, c) == NULL)
	{
		while (src[cont] != '\0')
		{
			cont++;
		}
	}
	else
	{
		while ((ft_strchr(src, c) - cont)[0] != '\0' && (ft_strchr(src, c)
				- cont)[0] != c)
		{
			cont++;
		}
		cont = cont - 1;
	}
	return (cont);
}

char	*ft_return_word(char *str, char *word, char c)
{
	int	x;

	x = 0;
	while (x < ft_long(str, c))
	{
		word[x] = str[x];
		x++;
	}
	word[x] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**mat;
	char	*str;
	char	*word;
	int		i;

	i = 0;
	str = (char *)s;
	if (s == NULL)
		return (NULL);
	mat = (char **)malloc((ft_cont_del(s, c) + 1) * sizeof(char *));
	if (!mat)
		return (NULL);
	while (i < ft_cont_del(s, c))
	{
		str = ft_while(str, c);
		word = (char *)malloc((ft_long(str, c) + 1) * sizeof(char));
		if (!word)
			return (NULL);
		mat[i] = ft_strdup(ft_return_word(str, word, c));
		i++;
		str = ft_strchr(str, c) + 1;
		free(word);
	}
	mat[i] = NULL;
	return (mat);
}
/*
int	main(void)
{
	char	*s;
	int		i;
	char	**result;

	s = ("\0sad\0ssd");
	i = 0;
	result = ft_split(s, ' ');
	while (i<4)
	{
		printf("|%s|\n", result[i]);
		i++;
	}
}
*/