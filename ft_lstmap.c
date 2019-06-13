/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 16:17:37 by tcajee            #+#    #+#             */
/*   Updated: 2019/06/13 12:41:34 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*copy;
	t_list	*next;

	head = NULL;
	if (lst && f)
	{
		copy = f(lst);
		next = ft_lstnew(copy->content, copy->content_size);
		if (!next)
			return (NULL);
		head = next;
		lst = lst->next;
		while (lst)
		{
			copy = f(lst);
			next->next = ft_lstnew(copy->content, copy->content_size);
			if (!next)
				return (NULL);
			next = next->next;
			lst = lst->next;
		}
	}
	return (head);
}
