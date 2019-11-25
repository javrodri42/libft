/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 16:55:08 by javrodri          #+#    #+#             */
/*   Updated: 2019/11/15 12:05:51 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list	*pointer;

	if (!(pointer = malloc(sizeof(t_list))))
		return (0);
	pointer->content = (t_list*)content;
	pointer->next = NULL;
	return (pointer);
}
