/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 22:08:27 by csnyder           #+#    #+#             */
/*   Updated: 2016/12/21 20:17:23 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str)
{
	unsigned int	i;
	char	*dest;

	i = 0;
	dest = (char*) malloc(sizeof(char) * strlen(str) + 1);
	if (dest == NULL)
		return (NULL);
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == ',' || str[i] == '\n' || str[i] == '\t')
			i++;
		while (i++)
		{
			if (str[i] == ' ' || str[i] == ',' || str[i] == '\n' || str[i] == '\t')
				break;
			dest[i] == str[i];
		}
	}
	return (dest);
}
