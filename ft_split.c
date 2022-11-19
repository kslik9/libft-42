/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:42:21 by kslik             #+#    #+#             */
/*   Updated: 2022/10/21 19:15:02 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	klmat(char const *s, char c)
{
	int	i;
	int	y;

	y = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i])
			i++;
		else
		{
			while (s[i] != c && s[i])
			{
				i++;
			}
			y++;
		}
	}
	return (y);
}

static int	ft_strlen_ljadid(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

void	ft_str_cpy(char *dst, char *src, char c)
{
	int	i;

	i = 0;
	while (src[i] && src[i] != c)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**ml;

	i = 0;
	if (!s)
		return (0);
	j = 0;
	ml = ft_calloc((klmat(s, c) + 1), sizeof(char *));
	if (!ml)
		return (0);
	while (s[j])
	{
		while (s[j] == c && s[j])
			j++;
		if (s[j])
		{
			ml[i] = ft_calloc((ft_strlen_ljadid((char *)&s[j], c) + 1), 1);
			if (!ml[i])
				return (0);
			ft_str_cpy(ml[i++], (char *)&s[j], c);
			j = j + ft_strlen_ljadid((char *)&s[j], c);
		}
	}
	return (ml);
}
