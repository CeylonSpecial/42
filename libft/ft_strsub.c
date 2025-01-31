/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 01:15:29 by csnyder           #+#    #+#             */
/*   Updated: 2017/01/22 15:55:15 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *str, unsigned int start, size_t len)
{
	unsigned int	i;
	char	*pstr;
	char	*sub;

	i = 0;
	if (str)
	{
		pstr = (char*)str;
		if (!(sub = (char*) malloc(sizeof(char) * len + 1)))
			return (NULL);
		while (i < len && pstr[start])
		{
			sub[i] = pstr[start];
			i++;
			start++;
		}
		sub[i] = '\0';
		return (sub);
	}
	return (NULL);
}
