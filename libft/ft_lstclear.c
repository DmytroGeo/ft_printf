/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:18:22 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/07/16 12:28:41 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;

	current = *lst;
	if (current == NULL || !del)
		return ;
	while (current != NULL)
	{
		*lst = current->next;
		(del)(current->content);
		free(current);
		current = *lst;
	}
}
