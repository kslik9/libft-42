/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 09:41:52 by kslik             #+#    #+#             */
/*   Updated: 2022/10/02 12:23:36 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
void *ft_memset(void *k, int c, size_t l)
{
    int i;
    i = 0;
    unsigned char *p;
    
    p = (unsigned char *) k;
    while ( l-- > 0)
    {
        p[i] = c;
        i++;
    }
    return (k);
}
// #include <stdio.h>
// int main()
// {
//     char str[]= "owowhhh";
//     printf("%s",ft_memset(str, 'o', 3));
// }