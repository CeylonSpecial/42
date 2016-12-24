/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 21:08:16 by csnyder           #+#    #+#             */
/*   Updated: 2016/12/13 21:22:28 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*number;
	int	len;

	len = findlen(n);
	number = ft_strnew(len);
	convert(n, number);
	return (number);
}

int		findlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n / 10 != 0)
	{
		len++;
		n = n / 10;
	}
	len++;
	return (len);
}

void 	convert(int n, char *number)
{
	if (n < 0)
	{
		n = -n;
		*number = '-';
		number++;
	}
	if (n / 10 != 0)
	{
		convert(n / 10, number);
		number = number + ft_strlen(number);
	}
	*number = (n % 10) + '0';
}
