/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:50:01 by kslik             #+#    #+#             */
/*   Updated: 2022/10/01 11:44:50 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
    int i;
    i  = 0;
    while (s[i] != '\0')
    {
        if ( s[i] == c)
        {
            return((char *)(s + i));
            
        }
        i++;
    }
    if(!c)
        return((char *)(s + i));
    return (0);
}
// #include <stdio.h>
// int main()
// {
//     char str[]= "owowhhh";
//     printf("%s",ft_strchr(str, 'w'));
// }