/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:40:19 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/12 19:08:48 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}

// La función compara los primeros n bytes de los bloques
// de memoria apuntados por s1 y s2. Devuelve un valor
// entero que indica la relación lexicográfica entre los
// bloques de memoria.

// int main()
// {
// 	char *str1 = "hola mundo";
// 	char *str2 = "hola mundo";
// 	printf("%d", ft_memcmp(str1, str2, 1));
// 	return (0);
// }
