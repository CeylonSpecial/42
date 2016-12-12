/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 00:27:13 by csnyder           #+#    #+#             */
/*   Updated: 2016/12/12 00:58:51 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *str, char (*f)(char))
{
	unsigned int	i;
	char	*src;
	char	*dest;

	i = 0;
	src = (char*)str;
	dest = ft_strnew(ft_strlen(str + 1));
	while (src[i])
	{
		
	}
}
