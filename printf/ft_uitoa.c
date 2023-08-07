/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:03:38 by pecampos          #+#    #+#             */
/*   Updated: 2022/06/10 14:20:07 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_length_num(unsigned int n)
{
	int	cont;

	cont = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		cont++;
		n = n / 10;
	}
	return (cont);
}

char	*ft_uitoa(unsigned int n)
{
	int				lon;
	char			*dest;
	unsigned int	resto;

	lon = ft_length_num(n);
	dest = (char *)malloc((lon + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	if (n == 0)
		dest[0] = '0';
	while (n != 0)
	{
		resto = n % 10;
		dest[ft_length_num(n) - 1] = resto + 48;
		n = n / 10;
	}
	dest[lon] = 0;
	return (dest);
}

/* int	main(void)
{
	printf("%s", ft_uitoa(654));
}
 */