/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:24:19 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/19 19:47:14 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	s2 = (char *)malloc((i + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

// Crea una nueva cadena de caracteres en el montón (heap)
// que es idéntica a la cadena especificada y devuelve un
// puntero al inicio de la nueva cadena. La nueva cadena
// es una copia independiente de la cadena original

// int	main()
// {
// 	printf("%s", ft_strdup("hola que tal"));
// 	return (0);
// }
