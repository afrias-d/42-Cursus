/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:24:06 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/12 18:15:17 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char		*ptr;
	size_t		i;

	i = 0;
	ptr = (char *)malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	else
	{
		while (i < (count * size))
		{
			ptr[i] = 0;
			i++;
		}
		return (ptr);
	}
}

// Hace una reserva de memoria de los dos 
// tamaños dados para la string creada
// y llena la string de 0 (valores nulos)

// int	main()
// {
// 	printf("%s", ft_calloc(4, 1));
// 	return (0);
// }
