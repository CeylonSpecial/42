/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 21:19:41 by csnyder           #+#    #+#             */
/*   Updated: 2016/12/07 20:39:21 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*pstr;

	i = 0;
	pstr = (unsigned char*)str;
	while (pstr[i] && i < n)
	{
		if (pstr[i] == c)
			return (&pstr[i]);
		i++;
	}
	return (NULL);
}
