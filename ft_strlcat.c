/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:41:48 by kslik             #+#    #+#             */
/*   Updated: 2022/10/13 12:19:45 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
size_t ft_strlcat(char *dest, char *src, size_t dsize)
{
	size_t srclen;
	size_t dstlen;
	size_t i;
	
	i = 0;
	if (dsize == 0)
		return (ft_strlen(src));
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dest);
	if (dstlen > dsize)
		return (srclen + dsize);
	if (dstlen < dsize)
	{
		while (src[i] && (i + dstlen) < (dsize - 1))
		{
			dest[i + dstlen] = src[i];
			i++;
		}
		dest[i + dstlen] = '\0';
	}
	return(dstlen + srclen);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char dest[15];
// 	ft_memset(dest, 'r',15);
// 	size_t d = ft_strlcat(dest, "lorem ipsum dolor sit amet", 5);
// 	//size_t d = strlcat(dest, "lorem ipsum dolor sit amet", 5);
// 	printf("%zu\n", d);
// 	printf("%s\n", dest);

// 	//printf("%hhd", dest2);
// }