/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvervier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 21:28:34 by yvervier          #+#    #+#             */
/*   Updated: 2021/02/01 08:50:49 by yvervier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*entry;

	entry = *lst;
	if (!lst || !del)
		return ;
	while (entry)
	{
		tmp = entry->next;
		ft_lstdelone(entry, del);
		entry = tmp;
	}
	*lst = NULL;
}
