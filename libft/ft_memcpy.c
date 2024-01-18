/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:17:48 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/12 19:10:45 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*change1;
	char	*change2;
	size_t	i;

	if (!dest && !src)
		return (0);
	change1 = (char *)dest;
	change2 = (char *)src;
	i = 0;
	while (i < n)
	{
		change1[i] = change2[i];
		i++;
	}
	return (dest);
}

// Copia los primeros n bytes de la ubicación de memoria
// apuntada por src a la ubicación de memoria apuntada por
// dest. Devuelve un puntero a la ubicación de memoria de
// destino (dest).

// int	main(void)
// {
// 	char ptr[] = "hola todo el mundo";
// 	ft_memcpy(ptr, "hey amigo", 7);
// 	printf("%s", ptr);
// 	return (0);
// }
