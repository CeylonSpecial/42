/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 01:08:52 by csnyder           #+#    #+#             */
/*   Updated: 2016/12/12 01:13:50 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int	i;
	char	*ps1;
	char	*ps2;

	i = 0;
	ps1 = (char*)s1;
	ps2 = (char*)s2;
	while (ps1[i] && ps2[i] && i < n)
	{
		if (ps1[i] != ps2[i])
			return (0);
		i++;
	}
	return (1);
}
