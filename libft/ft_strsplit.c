/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*	 ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 00:28:51 by csnyder           #+#    #+#             */
/*   Updated: 2017/03/01 13:30:44 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int		wordcount(const char *str, char c)
{
	unsigned int	words;
	int	i;

	words = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		while (str[i])
		{	
			if (str[i] == c || i == strlen(str) - 1)
			{	
				words++;			
				i++;
				break;
			}
			i++;
		}
	}
	return (words);
}

char			**ft_strsplit(char const *str, char c)
{
	int	letters;
	int	i;
	char	**array;

	i = 0;
	array = (char **) malloc(sizeof(char *) * wordcount(str, c));
//	while (i <= wordcount(str, c))
//	{
		letters = 0;
		while (*str && (*str == c))
			str++;
		while (*str != c)
		{	
			letters++;
			str++;
		}
		*array = (char*) malloc(sizeof(char) * (letters) + 1);
		str--;
		letters--;
		while (*str != c)
			array[i][letters--] = *str--;
		printf("%s", *array);
		str = str + strlen(array[i] - 1);
		printf("%c", *str);
//		i++;
//	}
	return (array);
}

int		main()
{
	char	*str;
	
	str = "      split       this for   me  !       ";
	ft_strsplit(str, ' ');
	return (0);
}
