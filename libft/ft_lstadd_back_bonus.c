/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:08:34 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/12 18:15:11 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;

	if (!*lst)
		*lst = new;
	else
	{
		list = ft_lstlast(*lst);
		list->next = new;
	}
}

// Agrega un nuevo nodo al final de la lista lst.
// Para ello, se comprueba que haya un primer nodo
// en la lista y si no lo iguala al nodo dado, new.
// Si la lista lst no está vacía llama ft_lstlast
// para irse al último nodo y, continuación mete el
// nuevo nodo new al final de la lista lst.

// int main()
// {
//     t_list *head = NULL;
//     t_list *new_node;

//     new_node = ft_lstnew("Hello");
//     ft_lstadd_back(&head, new_node);

//     new_node = ft_lstnew("World");
//     ft_lstadd_back(&head, new_node);

//     t_list *current = head;
//     while (current != NULL)
//     {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }
//     ft_lstclear(&head, &free);
//     return 0;
// }
