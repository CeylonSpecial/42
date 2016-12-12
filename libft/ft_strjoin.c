/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 01:37:46 by csnyder           #+#    #+#             */
/*   Updated: 2016/12/12 01:59:42 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;

	new = (char*) malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
	if (new == NULL)
		return (NULL);
	ft_strcpy(new, s1);
	return (ft_strcat(new, s2));
}
