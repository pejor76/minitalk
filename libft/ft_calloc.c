/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:03:38 by pecampos          #+#    #+#             */
/*   Updated: 2022/05/11 18:27:34 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*dev;

	if (nitems == 0 || size == 0)
		return (malloc(0));
	if (nitems == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	dev = (void *)malloc(nitems * size);
	if (!dev)
		return (NULL);
	ft_memset((unsigned char *)dev, 0, nitems * size);
	return (dev);
}
/*
int	main(void)
{
	int	*a;
	int	i;
	int	n;

	i = 0;
	n = 3;
	a = (int *)ft_calloc(SIZE_MAX, 0);
	printf("The numbers entered are: ");
	while (i < n)
	{
		printf("%d ", a[i]);
		i++;
	}
	return (0);
}
*/