/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecampos <pecampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:21:43 by pecampos          #+#    #+#             */
/*   Updated: 2022/05/13 09:59:18 by pecampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lista;

	lista = *lst;
	if (*lst != NULL)
	{
		lista = ft_lstlast(*lst);
		lista -> next = new;
		return ;
	}
	*lst = new;
}
