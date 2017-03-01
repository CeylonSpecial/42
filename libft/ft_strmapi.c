/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 19:54:01 by csnyder           #+#    #+#             */
/*   Updated: 2017/01/22 15:40:45 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*dest;

	i = 0;
	if (str)
	{
		if (!(dest = ft_strnew(ft_strlen(str))))
			return (NULL);
		while (*str)
		{	
			dest[i] = (*f)(i, *str);
			i++;
			str++;
		}
		return (dest);
	}
	return (NULL);
}
