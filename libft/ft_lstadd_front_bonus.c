/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:39:20 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/12 18:44:43 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

// Comprueba que exista haya primer nodo en la lista
// lst y nodo new. A continuación, se iguala el campo next
// del nodo new al primer nodo de lst. Posteriormente, se
// se iguala el primer nodo de lst al nodo new.

// int main()
// {
//     t_list *head = NULL;
//     t_list *new_node;

//     new_node = ft_lstnew("World");
//     ft_lstadd_front(&head, new_node);

//     new_node = ft_lstnew("Hello");
//     ft_lstadd_front(&head, new_node);

//     t_list *current = head;
//     while (current != NULL)
//     {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }
//     ft_lstclear(&head, &free);

//     return 0;
// }
