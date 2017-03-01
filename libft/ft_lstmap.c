/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnyder <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 21:41:53 by csnyder           #+#    #+#             */
/*   Updated: 2016/12/18 14:54:32 by csnyder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*nwlst;
	t_list	*nwelem;
	t_list	*prelst;

	nwlst = NULL;
	if (lst && (*f))
	{
		nwlst = (*f)(lst);
		prelst = nwlst;
		lst = lst->next;
		while (lst)
		{
			nwelem = (*f)(lst);
			prelst->next = nwelem;
			prelst = nwelem;
			lst = lst->next;
		}
		prelst->next = NULL;
	}
	return (nwlst);
}
