/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 19:05:05 by macerver          #+#    #+#             */
/*   Updated: 2025/11/26 06:19:00 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*list;
	t_list	*aux;

	list = NULL;
	while (lst)
	{
		new = malloc(sizeof(t_list));
		if (!new)
		{
			while (list)
			{
				aux = list -> next;
				del(list -> content);
				free(list);
				list = aux;
			}
			return (NULL);
		}
		new -> content = f(lst -> content);
		new -> next = NULL;
		ft_lstadd_back(&list, new);
		lst = lst -> next;
	}
	return (list);
}
