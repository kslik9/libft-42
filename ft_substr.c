/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:31:13 by kslik             #+#    #+#             */
/*   Updated: 2022/10/16 12:52:16 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*q;
	size_t	y;

	j = 0;
	if (len > ft_strlen((char *)s))
		len = ft_strlen((char *)s);
	q = malloc((len + 1) * sizeof(char));
	if (!q)
		return (0);
	y = ft_strlen((char *)s);
	if (start > y)
	{
		q[0] = '\0';
		return (q);
	}
	while (j < len)
	{
		q[j] = s[start];
		start++;
		j++;
	}
	q[j] = 0;
	return (q);
}
