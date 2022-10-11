/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:20:46 by kslik             #+#    #+#             */
/*   Updated: 2022/10/11 16:50:23 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int mochkila(char const *s1, char s)
{
    int i;
    i = 0;
    while (!s1)
    {
        if(s1[i] == s)
            return (1);
        i++;
    }
    return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int x;
    int j;
    int y;
    int w;
    char *trim;
    x = 0;
    i = 0;
    j = ft_strlen((char *)set);
    y = ft_strlen((char *)s1);
    while(set[x] != '\0')
    {
        if (mochkila(set, s1[i]) == 1 )
            i++;
        x++;
    }
    while(j >= 0)
    {
        if (mochkila(set, s1[y]) == 1 )
            y--;
        j--;
    }
    w = y - i;
    trim = ft_substr((char const *)s1,i,y - i);
    if(trim == 0)
        return (0);
    
    return (trim);
}
// #include <stdio.h>
// int main()
// {
//     char s1[]= "kahaidkanj";
//     char set[]= "kaj";
//     printf("%s", ft_strtrim(s1, set));
// }