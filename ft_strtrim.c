/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:20:46 by kslik             #+#    #+#             */
/*   Updated: 2022/10/16 12:52:10 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	mochkilalgdam(char const *set, char s)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

int	mochkillor(char const *set, char s)
{
	int	i;

	i = ft_strlen((char *)set) - 1;
	while (i >= 0)
	{
		if (set[i] == s)
			return (1);
		i--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	x;
	size_t	j;
	size_t	y;
	char	*trim;

	if (!s1)
		return (0);
	x = 0;
	i = 0;
	j = ft_strlen((char *)set);
	y = ft_strlen((char *)s1);
	while ((mochkilalgdam(set, s1[i]) == 1))
		i++;
	while (mochkilalgdam(set, s1[y - 1]) == 1 && y > i)
		y--;
	trim = ft_substr((char const *)s1, i, (y - i));
	if (!trim)
		return (0);
	return (trim);
}
