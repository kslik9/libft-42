/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:50:55 by kslik             #+#    #+#             */
/*   Updated: 2022/10/12 15:42:17 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_itoa(int n)
{
    char *str;
    int i;
    int c;
    long s;
    c = n;
    s = n;
    i = 1;
    while(c / 10)
    {
        c = c / 10;
        i++;
    }
     if(n < 0)
    {
        i++;
        s = s * (-1);
    }
    str = malloc((i + 1) * sizeof(char));
    str[i] = '\0';
    if(!str)
        return(0);
    i = i - 1;
    while (i >= 0)
    {
        str[i] = s % 10 + 48;
        s = s / 10;
        i--;
    }
    if (n < 0)
       str[0] = '-';
    return (str);
}
// #include <stdio.h>
// int main()
// {
//     printf("%s",ft_itoa(-2147483648));
// }