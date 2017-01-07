/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 22:05:32 by csnyder           #+#    #+#             */
/*   Updated: 2017/01/06 22:05:51 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t n)
{
  unsigned int  i;
  unsigned int  j;

  i = 0;
  j = 0;
  while (i < n)
  {
    dest[j] = src[i];
    j++;
    i++;
  }
  return (strlen(dest) + strlen(src));
}
