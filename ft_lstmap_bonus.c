/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberling <eberling@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:25:15 by eberling          #+#    #+#             */
/*   Updated: 2025/10/16 15:51:29 by eberling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;

	if (!lst || f || del)
		return (NULL);
	first = ft_lstnew(lst->content);
	while (lst)
	{
		ft_lstadd_front(&first, f(ft_lstnew(lst->content)->content));
		lst = lst->next;
	}
	return (first);
}
