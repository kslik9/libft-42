/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:41:48 by kslik             #+#    #+#             */
/*   Updated: 2022/10/03 16:42:06 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
size_t ft_strlcat(char *dest, char *src, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	l;

	i = 0;
	j = 0;
	l = 0;
	if(dest == 0 && n == 0)
		return (ft_strlen(src));
	while (src[l])
		l++;
	while (dest[i] != '\0')
		i++;
	if (n == 0 || n <= i)
		return (l + n);
	l = l + i;
	while ((i < n - 1) && (src[j] != '\0'))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (l);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char b[0xF] = "nyan !";
	
	printf("%lu\n",ft_strlcat(((void *)0), b, 0));
	printf("%lu",strlcat(((void *)0), b, 0));
}*/