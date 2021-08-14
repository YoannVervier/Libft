/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvervier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 07:21:50 by yvervier          #+#    #+#             */
/*   Updated: 2021/08/14 16:57:05 by yvervier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;

	if (!lst || !f)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	new_elem = new_lst;
	lst = lst->next;
	while (lst)
	{
		new_elem->next = ft_lstnew(f(lst->content));
		if (!new_elem)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		lst = lst->next;
		new_elem = new_elem->next;
	}
	return (new_lst);
}
