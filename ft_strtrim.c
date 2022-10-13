/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:20:46 by kslik             #+#    #+#             */
/*   Updated: 2022/10/13 15:09:05 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int mochkila(char const *set, char s)
{
    int i;
    i = 0;
    while (set[i])
    {
        if(set[i] == s)
            return (1);
        i++;
    }
    return (0);
}
int smochkila(char const *set, char s)
{
    int i;
    i = ft_strlen((char *)set) - 1;
    while (i >= 0)
    {
        if(set[i] == s)
            return (1);
        i--;
    }
    return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    size_t x;
    size_t j;
    size_t y;
    size_t w;
    char *trim;

    if (!s1)
        return (0);
    x = 0;
    i = 0;
    j = ft_strlen((char *)set);
    y = ft_strlen((char *)s1);
    while((mochkila(set, s1[i]) == 1))
        i++;
    while(smochkila(set, s1[y - 1]) == 1)
        y--;
    w = y - i;
    if (y == 0)
        w = 0;
    trim = ft_substr((char const *)s1,i,w);
    if (!trim)
        return 0;
    return (trim);
}
// #include <stdio.h>
// int main()
// {
//     char s1[]= "kahaidkanj";
//     char set[]= "kaj";
//     printf("%s", ft_strtrim(s1, set));
// }