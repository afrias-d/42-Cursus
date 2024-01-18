/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:40:48 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/12 18:58:38 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*elem;

	new = 0;
	if (!lst || !(*f) || !(*del))
		return (0);
	while (lst)
	{
		elem = (t_list *)malloc(sizeof(t_list));
		if (!elem)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		elem->content = (*f)(lst->content);
		elem->next = 0;
		ft_lstadd_back(&new, elem);
		lst = lst->next;
	}
	return (new);
}

// En esta función se crean los nodos new (la nueva lista)
// y elem (el nodo actual que se está procesando). Se
// verifica que haya función *f, *del y lista original lst.
// Después, se recorre la lista lst y se asigna memoria elem.
// Si falla la asignación de memoria se libera todo con la
// función ft_lstclear. Si no, se iguala el contenido de elem
// a la función f del contenido de lst. Una vez esto, se aplica
// el nuevo nodo de elem al final de la lista new y se repite
// hasta que llegue al final y devuelva la lista new completa.
