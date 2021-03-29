/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 11:34:27 by javrodri          #+#    #+#             */
/*   Updated: 2021/03/29 13:50:32 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*gon;
	t_list	*aux;
	t_list	*uxgon;

	aux = lst;
	gon = malloc(sizeof(t_list));
	if (!gon)
		return (0);
	auxgon = gon;
	while (aux)
	{
		auxgon->content = f(aux->content);
		auxgon->next = malloc(sizeof(t_list));
		if (!(auxgon->next))
			ft_lstclear(&auxgon, del);
		aux = aux->next;
		auxgon = auxgon->next;
	}
	return (gon);
}
