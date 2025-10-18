/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberling <eberling@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:25:15 by eberling          #+#    #+#             */
/*   Updated: 2025/10/18 17:25:58 by eberling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list_head;
	t_list	*new_list;

	if (!lst || !f || !del)
		return (NULL);
	new_list_head = NULL;
	while (lst)
	{
		new_list = ft_lstnew(f(lst->content));
		if (!new_list)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		if (new_list_head == NULL)
			new_list_head = new_list;
		else
			ft_lstadd_back(&new_list_head, new_list);
		lst = lst->next;
	}
	return (new_list_head);
}
