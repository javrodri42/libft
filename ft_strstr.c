/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 19:01:17 by javrodri          #+#    #+#             */
/*   Updated: 2019/11/07 08:36:53 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	unsigned int i;
	unsigned int pos;

	i = 0;
	if (to_find[i] == '\0')
		return ((char*)str);
	while (str[i] != '\0')
	{
		pos = 0;
		while (to_find[pos] == str[i + pos])
		{
			if (to_find[pos + 1] == '\0')
			{
				return ((char*)&str[i]);
			}
			pos++;
		}
		i++;
	}
	return (0);
}
