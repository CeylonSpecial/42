/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 01:15:29 by csnyder           #+#    #+#             */
/*   Updated: 2016/12/12 01:36:14 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *str, unsigned int start, size_t len)
{
	unsigned int	i;
	char	*pstr;
	char	*sub;

	i = 0;
	pstr = (char*)str;
	sub = (char*) malloc(sizeof(char) * len);
	if (sub == NULL)
		return (NULL);
	while (i < len)
	{
		sub[i] = pstr[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
