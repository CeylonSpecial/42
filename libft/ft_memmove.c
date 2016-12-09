/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 13:17:06 by csnyder           #+#    #+#             */
/*   Updated: 2016/12/07 20:37:39 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;

	if (src == dest || n == 0)
		return (dest);
	else if (dest < src)
		return (ft_memcpy(dest, src, n));
	else
	{
		psrc = (unsigned char*)src;
		pdest = (unsigned char*)dest;
		while (--n)
			pdest[len] = psrc[len];
		pdest[0] = psrc[0];
		return (dest);
	}
}
