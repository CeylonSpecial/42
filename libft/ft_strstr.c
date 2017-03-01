/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 20:16:01 by csnyder           #+#    #+#             */
/*   Updated: 2017/01/16 19:03:13 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	unsigned int  i;
	int j;
	int counter;

	i = 0;
	j = 0;
	counter = 0;
	if ((ft_strlen(little) == 0) || (ft_strcmp(big, little) == 0))
		return ((char*)big);
	while (big[i++])
	{
		while (big[i] == little[j])
		{
			if (j == ft_strlen(little) - 1)
				return ((char*)&big[i] - counter);
			counter++;
			i++;
			j++;
		}
		j = 0;
		counter = 0;
	}
	return (NULL);
}
