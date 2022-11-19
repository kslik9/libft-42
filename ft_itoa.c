/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:50:55 by kslik             #+#    #+#             */
/*   Updated: 2022/10/16 12:29:19 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	tol(long int c)
{
	int	i;

	i = 1;
	if (c < 0)
	{
		c = c * (-1);
		i++;
	}
	while (c / 10)
	{
		c = c / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	i;
	long int	s;
	int			j;

	j = 0;
	s = n;
	i = tol(s);
	if (s < 0)
	{
		s *= -1;
		j = 1;
	}
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (0);
	str[i] = '\0';
	if (j == 1)
		str[0] = '-';
	while (--i >= j)
	{
		str[i] = s % 10 + 48;
		s = s / 10;
	}
	return (str);
}
