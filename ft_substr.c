/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:31:13 by kslik             #+#    #+#             */
/*   Updated: 2022/10/12 15:36:19 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr(char const *s, unsigned int start,size_t len)
{
    size_t i;
    size_t j;
    char *q;
    size_t y;
    
    i = start;
    j = 0;
    y = ft_strlen((char *)s);
    if (i >= y)
        return (malloc(1));
    q = malloc((len + 1) * sizeof (char));
    if(!q)
        return(0);
    while (j < len)
    {
        q[j] = s[i];
        i++;
        j++;
    }
    
    q[j] = '\0';
    return (q);
}
// #include <stdio.h>
// int main()
// {
//     char s[40]= "kahidasllik";
//     printf("%s", ft_substr(s,2,10));
// }