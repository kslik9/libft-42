/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:17:44 by kslik             #+#    #+#             */
/*   Updated: 2022/10/12 13:13:27 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *hay, const char *ned,size_t l )
{
    size_t i ;
    size_t n ;
    size_t c ;
    i = 0;

    c = 0;
    if (l == 0)
        return(char *)hay;
    if (ned[0] == '\0')
        return(char *)hay;
    if(ft_strlen((char *)ned) > ft_strlen((char *)hay))
        return (0);
    while ((hay[i]) && i < l)
    {
        n = 0;
        while(hay[i] && hay[i] == ned[n] && i < l)
        {
            c++;
            i++;
            n++;
        }
        if(c == ft_strlen((char *)ned))
            return (char *)&hay[i - ft_strlen((char *)ned)];
        if (c > 0)
            i--;
        c = 0;
        i++;
    }
    return (0);
} 
// }       
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char *h = NULL;
//     char n[]= "khalid";
//     //printf("%s\n",ft_strnstr(h,n,20));
//     printf("%s",strnstr(h,n,20));

// }