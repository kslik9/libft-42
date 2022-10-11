/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:36:25 by kslik             #+#    #+#             */
/*   Updated: 2022/10/05 14:44:09 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memcpy(void *dest , void *src , size_t n)
{
	char *ssrc = (char *) src;
	char *sdest = (char *) dest;
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		sdest[i] = ssrc[i];
		i++;
	}
	   return (dest);
}