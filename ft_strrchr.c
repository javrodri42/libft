/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:24:37 by javrodri          #+#    #+#             */
/*   Updated: 2019/11/06 15:49:58 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ult_pos;

	ult_pos = (0);
	while (*s)
	{
		if (*s == c)
			ult_pos = (char*)s;
		++s;
	}
	if (ult_pos)
		return (ult_pos);
	if (c == '\0')
		return ((char*)s);
	return (0);
}
