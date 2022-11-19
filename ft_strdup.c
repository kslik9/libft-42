/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:58:50 by kslik             #+#    #+#             */
/*   Updated: 2022/10/16 12:51:33 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*q;
	int		k;

	k = ft_strlen((char *)s1);
	q = malloc((k + 1) * sizeof(char));
	if (!q)
		return (0);
	ft_memcpy(q, (char *)s1, k);
	q[k] = '\0';
	return (q);
}
