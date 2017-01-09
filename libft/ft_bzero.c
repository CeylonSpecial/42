/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 12:50:53 by csnyder           #+#    #+#             */
/*   Updated: 2016/12/07 18:23:32 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned int	i;
	unsigned char	*pstr;

	i = 0;
	pstr = (unsigned char*)str;
	while (i < n)
	{
		pstr[i] = 0;
		i++;
	}
}
