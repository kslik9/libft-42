/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:55:22 by kslik             #+#    #+#             */
/*   Updated: 2022/10/02 12:46:13 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}
#include <stdio.h>
int main()
{
    char str[]= "owowhhh";
    printf("%s",ft_memset(str, 'o', 3));
}