/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 19:54:01 by csnyder           #+#    #+#             */
/*   Updated: 2016/12/21 20:01:56 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*dest;

	i = 0;
	dest = ft_strnew(ft_strlen(str));
	while (*str)
	{
		dest[i] = (*f)(i, *str);
		i++;
		str++;
	}
	return (dest);
}
