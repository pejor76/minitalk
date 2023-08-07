/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:21:43 by pecampos          #+#    #+#             */
/*   Updated: 2022/05/09 09:42:41 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lista;

	lista = lst;
	if (lst != NULL)
	{
		while (lst->next != NULL)
		{
			lst = lst->next;
			lista = lst;
		}
	}
	return (lista);
}
