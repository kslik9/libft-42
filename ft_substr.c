/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:31:13 by kslik             #+#    #+#             */
/*   Updated: 2022/10/11 12:34:47 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr(char const *s, unsigned int start,size_t len)
{
    size_t i;
    size_t j;
    char *q;
    i = 0;
    j = 0;
    q = malloc(((len - start) + 1) * sizeof (char));
    if(!s)
        return(0);
    while(i < start)
        i++;
    while (i <= len && i >= start)
    {
        q[j] = s[i];
        i++;
        j++;
    }
    q[len] = '\0';
    return (q);
}
// #include <stdio.h>
// int main()
// {
//     char s[]= "dfsdgdg";
//     printf("%s", ft_substr(s,2,6));
// }