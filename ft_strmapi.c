/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:40:55 by kslik             #+#    #+#             */
/*   Updated: 2022/10/16 12:51:55 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		j;
	char	*kslik;

	i = 0;
	j = ft_strlen((char *)s);
	kslik = malloc((j + 1) * sizeof(char));
	if (!kslik)
		return (0);
	while (s[i])
	{
		kslik[i] = f(i, s[i]);
		i++;
	}
	kslik[i] = '\0';
	return (kslik);
}
