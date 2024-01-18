/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:55:55 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/12 19:18:03 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t len)
{
	unsigned char	*change;
	size_t			i;

	change = (unsigned char *)ptr;
	i = 0;
	while (i < len)
	{
		change[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}

// llena el bloque de memoria apuntado por ptr con el value
// especificado por value hasta el número de bytes especificado
// por len. Devuelve un puntero a la ubicación de memoria
// de destino (ptr).

// int	main(void)
// {
// 	char ptr[] = "hola todo el mundo";
// 	ft_memset(ptr, '5', 10);
// 	printf("%s", ptr);
// 	return (0);
// }
