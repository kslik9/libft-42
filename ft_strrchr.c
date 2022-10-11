/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:29:37 by kslik             #+#    #+#             */
/*   Updated: 2022/10/05 11:47:51 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
    size_t i;
    i  = ft_strlen((char *)s);
    while ( i > 0)
    {
        if ( s[i] == c)
        {
            return((char *)(s + i ));
            
        }
        i--;
    }
    if(s[i] == c)
        return((char *)(s + i)); 
    return (0);
}
// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     char str[]= "owowhhh";
//     printf("%s\n",ft_strrchr(str, 'w'));
//     printf("%s",strrchr(str, 'w'));
// }
