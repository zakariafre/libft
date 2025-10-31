/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahrabar <zahrabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:16:18 by zahrabar          #+#    #+#             */
/*   Updated: 2025/10/31 16:20:56 by zahrabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list2;

	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		list2 = malloc(sizeof(lst));
		if (!list2)
			del(list2);
		list2->content = f(lst->content);
		lst = lst->next;
		list2 = list2->next;
	}
	return (list2);
}
