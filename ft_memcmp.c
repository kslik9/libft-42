/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:25:01 by kslik             #+#    #+#             */
/*   Updated: 2022/10/04 13:24:06 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_memcmp(const void *f, const void *s, size_t n)
{
    unsigned char *ff;
    unsigned char *ss;
    size_t i;

    ff = (unsigned char *) f;
    ss = (unsigned char *) s;
    i = 0;
    while(i < n)
    {
        if((ff[i]) != (ss[i]))
        {
            return (ff[i] - ss[i]);
        }
        i++;
    }
    return (0);
    
     
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char f[20]="f";
//     char s[]="fsdfghjkloiuytrewqasdfghjkloiuytrewq";
//     printf("%d\n", ft_memcmp(f,s,20));
//     printf("%d", memcmp(f,s,20));

// }
