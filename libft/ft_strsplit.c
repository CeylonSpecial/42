/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*	 ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 00:28:51 by csnyder           #+#    #+#             */
/*   Updated: 2016/12/22 21:59:21 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *str, char c)
{
	unsigned int	letters;
	unsigned int	i;
	char	**array;

	i = 0;
	letters = 0;
	array = (char **) malloc(sizeof(char *) * wordcount(str, c));
	while (i <= wordcount(str, c))
	{
		while (*str && (*str == c))
			str++;
		while (*str != c)
		{
			letters++;
			*str++;
		}
		if ((array[i] = ft_strnew(letters)) == NULL)
			return (NULL);
		str--;
		while (*str != c)
			array[i][(letters - 1)--] = *str--;
		str = str + (ft_strlen(array[i]) + 1);
		i++;
	}
	return (array);
}

int		wordcount(char *str, char c)
{
	int	words;

	wordcount = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		while (*str++)
		{
			if (*str == c)
			{
				words++;
				break;
			}
		}
	}
	return (words);
}
