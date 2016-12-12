/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 23:07:07 by csnyder           #+#    #+#             */
/*   Updated: 2016/12/11 23:19:48 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char*) malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	ft_memset(str, 0, size);
	return (str);
}
