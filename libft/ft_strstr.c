/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 20:16:01 by csnyder           #+#    #+#             */
/*   Updated: 2016/12/08 20:51:14 by csnyder          ###   ########.fr       */
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
	if (little[i] == '\0')
		return (big);
	while (big[i++])
	{
		while (big[i++] == little[j++])
		{
			if (j == strlen(little) - 1)
				return (&little[j] - counter);
			counter++;
		}
		j = 0;
		counter = 0;
	}
	return (NULL);
}
