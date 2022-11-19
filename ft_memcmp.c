/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:25:01 by kslik             #+#    #+#             */
/*   Updated: 2022/10/16 12:55:27 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *f, const void *s, size_t n)
{
	unsigned char	*ff;
	unsigned char	*ss;
	size_t			i;

	ff = (unsigned char *)f;
	ss = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if ((ff[i]) != (ss[i]))
		{
			return (ff[i] - ss[i]);
		}
		i++;
	}
	return (0);
}
