/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   experiment.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 20:43:25 by csnyder           #+#    #+#             */
/*   Updated: 2017/01/28 21:03:52 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (i <= strlen(str))
	{
		if (str[i] == c)
			return ((char*)&str[i]);
		i++;
	}
	return (NULL);
}

int		main()
{
	int	c;
	char *str;
	
	c = ' ';
	str = "   hello   ";
	printf("%s", ft_strchr(str, !c));
	return (0);
}
