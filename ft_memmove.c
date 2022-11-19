/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:11:29 by kslik             #+#    #+#             */
/*   Updated: 2022/10/16 10:13:35 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t l)
{
	if (dst > src)
	{
		while (l--)
		{
			*((unsigned char *)dst + l) = *((unsigned char *)src + l);
		}
	}
	else
	{
		ft_memcpy(dst, (char *)src, l);
	}
	return (dst);
}
