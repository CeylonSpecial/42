/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 22:08:27 by csnyder           #+#    #+#             */
/*   Updated: 2017/02/01 18:12:34 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int		findchar(const char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++; 
	return (i);
}

int		findcharr(const char *str)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i--;
	return (i);
}

char	*ft_strtrim(char const *str)
{
	int	i;
	int	j;
	char	*dest;

	j = 0;
	if (str)
	{
		i = findchar(str);
		if (i == ft_strlen(str))
			return (dest = (char*)malloc(sizeof(char) * 0));
		else
		{	
			if (!(dest = (char*)malloc(sizeof(char) * (findcharr(str) - i) + 2)))
				return (NULL);
			while (i <= findcharr(str))
				dest[j++] = str[i++];
			dest[j] = '\0';
			return (dest);
		}
	}
	return (NULL);
}
