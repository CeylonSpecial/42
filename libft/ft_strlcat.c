/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 22:05:32 by csnyder           #+#    #+#             */
/*   Updated: 2017/01/28 16:49:37 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t  ft_strlcat(char *dst, const char *src, size_t n)
{
	unsigned int  i;
  	unsigned int  j;

  	i = 0;
	j = 0;
  	if (n > 0)
	{
		while (dst[i] && i < n)
			i++;
		j = i;
  		while (src[i - j] && i < (n - 1))
  		{
    		dst[i] = src[i - j];
    		i++;
  		}
		if (j < n)
			dst[i] = '\0';
	}
  	return (j + ft_strlen(src));
}
