/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:37:03 by kslik             #+#    #+#             */
/*   Updated: 2022/10/05 14:56:18 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memchr(const void *k, int c, size_t n)
{
    size_t i;
     i = 0;
     while ( i < n)
     {
        if(((unsigned char*)k)[i] == (unsigned char)c)
            return((unsigned char*)(k + i));
        i++;
     }return (0);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s[]= "saawasxcdc";
//     printf("%s\n",ft_memchr(s,'w',4));
//     printf("%s",memchr(s,'w',4));

// }