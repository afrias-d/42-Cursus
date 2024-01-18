/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:02:18 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/12 19:12:21 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;

	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
		return (0);
	if (dest <= src)
	{
		while (n--)
			*d++ = *s++;
	}
	else if (dest > src)
	{
		s += n - 1;
		d += n - 1;
		while (n--)
			*d-- = *s--;
	}
	return (dest);
}

// La principal diferencia entre memmove y memcpy es que memmove
// maneja correctamente situaciones donde las áreas de memoria de
// origen y destino se solapan. Si las áreas de memoria se solapan
// y se utiliza memmove, el contenido se copiará correctamente sin
// corromper los datos. Esto lo logra utilizando un enfoque que
// puede trabajar con bloques de memoria que se traslapan, mientras
// que memcpy no garantiza un comportamiento correcto en ese caso.

// int	main(void)
// {
// 	char src[] = "Hola, mundo, que tal estais todos";
// 	char *ptr = src + 6;
// 	printf("%s\n", ptr);
// 	ft_memmove(src, ptr, 27);
// 	printf("%s\n", src);
// 	return (0);
// }
