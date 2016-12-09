/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 12:46:35 by csnyder           #+#    #+#             */
/*   Updated: 2016/12/07 18:22:43 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	i;
	char	*pstr;

	i = 0;
	pstr = (char*)str;
	while (i < n)
	{
		pstr[i] = c;
		i++;
	}
	return (pstr);
}
