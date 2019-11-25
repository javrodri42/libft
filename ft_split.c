/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 15:07:15 by javrodri          #+#    #+#             */
/*   Updated: 2019/11/14 15:56:33 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countwords(char const *str, char c)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	if (*str == '\0')
		return (0);
	while (*str)
	{
		if (*str == c)
			j = 0;
		else if (j == 0)
		{
			j = 1;
			i++;
		}
		str++;
	}
	return (i);
}

static int		ft_countchar(char const *s2, char c, int i)
{
	int	lenght;

	lenght = 0;
	while (s2[i] != c && s2[i] != '\0')
	{
		lenght++;
		i++;
	}
	return (lenght);
}

static char		**ft_write_in_tab(char const *s, char **dst, char c, int l)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i] != '\0' && j < l)
	{
		k = 0;
		while (s[i] == c)
			i++;
		dst[j] = (char *)malloc(sizeof(char) * ft_countchar(s, c, i) + 1);
		if (dst[j] == NULL)
			return (0);
		while (s[i] != '\0' && s[i] != c)
			dst[j][k++] = s[i++];
		dst[j][k] = '\0';
		j++;
	}
	dst[j] = 0;
	return (dst);
}

char			**ft_split(char const *s, char c)
{
	char	**dst;
	int		lines;

	if (s == NULL)
		return (NULL);
	lines = ft_countwords(s, c);
	dst = (char **)malloc(sizeof(char *) * (lines + 1));
	if (dst == NULL)
		return (NULL);
	return (ft_write_in_tab(s, dst, c, lines));
}
