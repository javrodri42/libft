/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:03:52 by javrodri          #+#    #+#             */
/*   Updated: 2019/11/15 15:02:21 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*list;

	if (alst)
	{
		if (*alst == NULL)
			*alst = new;
		else
		{
			list = ft_lstlast(*(alst));
			list->next = new;
		}
	}
}
