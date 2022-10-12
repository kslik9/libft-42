/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:59:53 by kslik             #+#    #+#             */
/*   Updated: 2022/10/12 13:14:46 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_calloc( size_t num, size_t size)
{
    void *p;
    p = malloc(num *size);
    if ( p == 0)
        return (0);
    ft_bzero(p, num * size);
    return (p);    
}