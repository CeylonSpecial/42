/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 13:00:31 by csnyder           #+#    #+#             */
/*   Updated: 2016/12/07 20:37:20 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*psrc;
	unsigned char	*pdest;

	i = 0;
	psrc = (unsigned char*)src;
	pdest = (unsigned char*)dest;
	while (i < n)
	{
		pdest[i] = psrc[i];
		if (psrc[i] == (unsigned char)c)
			return (&pdest[i] + 1);
		i++;
	}
	return (NULL);
}
