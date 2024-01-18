/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:00:09 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/13 18:18:26 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return (str + i);
		i++;
	}
	if ((char)c == '\0')
		return (str + i);
	return (NULL);
}

// Busca el carácter especificado en la cadena a
// partir del primer carácter hasta el carácter nulo
// ('\0'). Si encuentra el carácter, devuelve un puntero
// a la primera ocurrencia de ese carácter en la cadena.
// Si el carácter no está presente en la cadena, devuelve
// un puntero nulo (NULL).

// int	main(void)
// {
// 	printf("%s", ft_strchr("hola mundo", 't' + 256));
// 	// char *cadena = strchr("hola", 0);
// 	// printf("%s", cadena);
// 	return (0);
// }
