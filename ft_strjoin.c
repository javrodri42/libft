/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 09:54:54 by javrodri          #+#    #+#             */
/*   Updated: 2019/11/15 09:59:52 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	count;
	size_t	s1_size;
	char	*tab;

	count = -1;
	if (!s1 || !s2)
		return (NULL);
	s1_size = ft_strlen(s1);
	if (!(tab = (char *)malloc((s1_size + ft_strlen(s2) + 1) * sizeof(char))))
		return (NULL);
	while (s1[++count])
		tab[count] = s1[count];
	count = -1;
	while (s2[++count])
		tab[s1_size + count] = s2[count];
	tab[s1_size + count] = '\0';
	return (tab);
}
