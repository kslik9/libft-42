/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:09:48 by kslik             #+#    #+#             */
/*   Updated: 2022/10/03 09:47:30 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_atoi(char *str)
{
	int i;
	int alam;
	int n;
	i = 0;
	alam = 1;
	n = 0;
	while(str[i] == '\n' || str[i] == '\t' || str[i] == ' '
	|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			alam = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - 48;
		i++;
	}
	return (n * alam);
	
}
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	char str[]= "\n000k125";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d", atoi(str));
// }