/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:03:38 by pecampos          #+#    #+#             */
/*   Updated: 2022/05/09 09:41:41 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				cont;
	char			*str;
	unsigned int	len;

	if (s == 0 || f == 0)
		return (NULL);
	len = ft_strlen((char *) s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	cont = 0;
	while (s[cont])
	{
		str[cont] = f(cont, s[cont]);
		cont++;
	}
	str[cont] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	str[];

	str[] = "patata";
	printf("%s", str + 3);
}
*/