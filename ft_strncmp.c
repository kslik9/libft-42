/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:54:05 by kslik             #+#    #+#             */
/*   Updated: 2022/10/05 14:57:15 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *q, const char *w, size_t n)
{
    size_t i;
    i = 0;
    size_t j;
    unsigned char *q1;
    unsigned char *w1;
    w1 = (unsigned char *)w;
    q1 = (unsigned char *)q;
    j = ft_strlen((char *)w1);
    while (i <= j && i < n)
    {
        if (q1[i] != w1[i])
        {
            j = q1[i] - w1[i];
            return (j);
        }
        i++; 
    }
    return (0);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {   
//     char s[]= "Aqp";
//     char u[]= "arr";
//     printf("%d\n",ft_strncmp(u,s,3));
//     printf("%d",strncmp(u,s,3));  
// }