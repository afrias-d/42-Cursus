/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:52:03 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/13 18:29:28 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)haystack;
	i = 0;
	if (!*needle)
		return (str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}

// La función g_strnstr busca la primera aparición de la
// subcadena needle en la cadena haystack, pero se
// detiene después de examinar los primeros len
// bytes de haystack. Si encuentra la subcadena, devuelve
// un puntero al comienzo de la primera ocurrencia; de lo
// contrario, devuelve NULL.

// int	main(void)
// {
// 	printf("%s", ft_strnstr("", "", 0));
// 	return (0);
// }
