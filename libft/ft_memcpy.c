/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 12:55:46 by csnyder           #+#    #+#             */
/*   Updated: 2016/12/07 18:24:10 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

void	*ft_memcpy(void *dest, const void src, size_t n)
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
		i++;
	}
	return (dest);
}
