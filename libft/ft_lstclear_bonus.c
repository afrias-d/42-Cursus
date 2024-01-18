/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:48:02 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/12 18:44:39 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*new;

	while (*lst)
	{
		new = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = new;
	}
}

// Esta función libera cada nodo de la lista lst
// y utiliza el nodo new para guardar ir pasando
// al siguiente nodo lst. Antes de ello, se le
// aplica la función del al contenido del nodo lst
// de turno.