/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:23:22 by kslik             #+#    #+#             */
/*   Updated: 2022/10/16 12:51:39 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	int		n;
	char	*y;

	i = 0;
	j = 0;
	k = ft_strlen((char *)s1);
	n = ft_strlen((char *)s2);
	y = ft_calloc((k + n + 1), sizeof(char));
	if (!y)
		return (0);
	while (i < k)
	{
		y[i] = s1[i];
		i++;
	}
	while (i < (k + n))
	{
		y[i] = s2[j];
		i++;
		j++;
	}
	return (y);
}
