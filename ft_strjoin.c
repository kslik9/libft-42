/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:23:22 by kslik             #+#    #+#             */
/*   Updated: 2022/10/11 13:37:30 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    int k;
    int n;
    int o;
    char *y;
    i = 0;
    j = 0;
    k = ft_strlen((char *)s1);
    n = ft_strlen((char *)s2);
    o = k + n;
    y = malloc(o * sizeof (char));
    while (i < k)
    {
        y[i] = s1[i];
        i++;
    } 
    while(i < o)
    {
        y[i] = s2[j];
        i++;
        j++;
    }
    return ((char *)y);
}
#include <stdio.h>
int main()
{
    char s1[]= "ssf";
    char s2[]= "qwe";
    printf("%s", ft_strjoin(s1,s2));   
}