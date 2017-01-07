/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 22:07:19 by csnyder           #+#    #+#             */
/*   Updated: 2017/01/06 22:07:25 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t n)
{
  unsigned int  i;
  int j;
  int counter;

  i = 0;
  j = 0;
  counter = 0;
  if (little[i] == '\0')
    return (big);
  while (big[i++] && i < n)
  {
    while (big[i++] == little[j++])
    {
      if (j == strlen(little) - 1)
        return (&little[j] - counter);
      counter++;
    }
    j = 0;
    counter = 0;
  }
  return (NULL);
}
