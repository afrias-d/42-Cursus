/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:09:25 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/13 18:24:15 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	j = 0;
	while (src[j] != '\0')
		j++;
	i = 0;
	while ((dest[i] != '\0') && (i < destsize) && (destsize > 0))
		i++;
	len = i + j;
	if (destsize == i)
		return (len);
	j = 0;
	if (destsize > 0)
	{
		while ((src[j] != '\0') && (i < destsize - 1))
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	return (len);
}

// La función concatena la string de origen (src) en la string
// destino y devuelve la longitud de la cadena concatenada. Eso
// sí, hasta el máximo de tamaño que se le ha fijado con destsize.

// int	main(void)
// {
// 	char		dest[10] = "a";

// 	printf("%zu\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 6));
// 	printf("%s", dest);
// 	return (0);
// }
