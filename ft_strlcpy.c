/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:13:33 by kslik             #+#    #+#             */
/*   Updated: 2022/10/05 14:51:09 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcpy(char *d, char *s, size_t dsize)
{
    size_t i;
    size_t l;
    i = 0;
    l = ft_strlen(s);
    if(dsize)
    {
        while(s[i] && i < dsize - 1)
        {
            d[i] = s[i];
            i++;
        }
        d[i] = '\0';
    }
    return (l);
}