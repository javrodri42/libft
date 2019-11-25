/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 11:34:27 by javrodri          #+#    #+#             */
/*   Updated: 2019/11/16 13:18:20 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (!lst)
		return (NULL);
	if (!(new = ft_lstnew(f(lst->content))))
		return (NULL);
	if (!(temp = malloc(sizeof(t_list))))
		return (NULL);
	temp = new;
	while (lst)
	{
		if (lst->next)
		{
			if (!(new->next = ft_lstnew(f(lst->next->content))))
			{
				ft_lstclear(&temp, del);
				return (0);
			}
			new = new->next;
		}
		lst = lst->next;
	}
	new->next = NULL;
	return (temp);
}
