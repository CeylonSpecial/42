/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 21:15:15 by csnyder           #+#    #+#             */
/*   Updated: 2017/01/16 19:23:31 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t n)
{
  unsigned int  i;
  int	j;
  int counter;

  i = 0;
  j = 0;
  counter = 0;
  if (little[i] == '\0' || ft_strcmp(big, little) == 0)  
    return ((char*)big);
  while (big[i++])
  {
    while (big[i] == little[j] && i < n)
    {
      if (j == ft_strlen(little) - 1)
        return ((char*)&big[i] - counter);
      counter++;
	  i++;
	  j++;
    }
    j = 0;
    counter = 0;
  }
  return (NULL);
}
