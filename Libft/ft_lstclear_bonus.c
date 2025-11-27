/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:17:18 by macerver          #+#    #+#             */
/*   Updated: 2025/11/25 18:44:36 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (*lst == NULL)
		return ;
	while ((*lst)-> next != NULL)
	{
		aux = (*lst)-> next;
		del((*lst)-> content);
		free(*lst);
		(*lst) = aux;
	}
	del((*lst)-> content);
	free(*lst);
	*lst = NULL;
}
