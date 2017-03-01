/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 21:14:59 by csnyder           #+#    #+#             */
/*   Updated: 2017/01/16 19:38:18 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int   ft_strncmp(const char *s1, const char *s2, size_t n)
{
  unsigned int  i;

  i = 0;
  
  while (i < n)
  {
    if (s1[i] != s2[i])
      return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	if (s1[i] == '\0' || s2[i] == '\0')
		return (0);
    i++;
  }
  return (0);
}
