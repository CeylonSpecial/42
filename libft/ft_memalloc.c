/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 22:21:45 by csnyder           #+#    #+#             */
/*   Updated: 2016/12/11 22:57:49 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*newmem;

	newmem = malloc(size);
	if (newmem == NULL)
		return (NULL);
	ft_memset(newmem, 0, size);
	return (newmem);
}
