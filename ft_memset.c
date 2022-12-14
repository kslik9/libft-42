/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 09:41:52 by kslik             #+#    #+#             */
/*   Updated: 2022/10/16 12:51:08 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *k, int c, size_t l)
{
	int				i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)k;
	while (l-- > 0)
	{
		p[i] = c;
		i++;
	}
	return (k);
}
