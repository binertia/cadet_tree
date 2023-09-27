/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 17:47:07 by ksongchu          #+#    #+#             */
/*   Updated: 2023/04/10 16:01:44 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*new_node;
	t_list	*head;
	t_list	*ptr;

	if (!lst || !f || !del)
		return (NULL);
	new_node = ft_lstnew(f(lst -> content));
	if (!new_node)
		return (NULL);
	head = new_node;
	ptr = head;
	while (lst -> next)
	{
		lst = lst -> next;
		new_node = ft_lstnew(f(lst -> content));
		if (!new_node)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&ptr, new_node);
		ptr = ptr -> next;
	}
	return (head);
}
