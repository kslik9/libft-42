/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:17:44 by kslik             #+#    #+#             */
/*   Updated: 2022/10/16 12:52:02 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t	i;
	size_t	nsize;
	size_t	j;
	size_t	hsize;

	nsize = ft_strlen((char *)need);
	hsize = ft_strlen((char *)hay);
	if (need[0] == 0)
		return ((char *)hay);
	if (!hay || len == 0)
		return (0);
	if (len > hsize)
		len = hsize;
	i = 0;
	while (hay[i] && i < len)
	{
		j = 0;
		while (((hay[i + j] == need[j]) && j < nsize) && (hay[i + j] && i
				+ j < len))
			j++;
		if (j == nsize)
			return ((char *)(hay + i));
		i++;
	}
	return (0);
}
