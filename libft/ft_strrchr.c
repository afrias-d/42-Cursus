/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:52:37 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/13 18:30:21 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] != (unsigned char)c)
			i--;
		else if (str[i] == (unsigned char)c)
			return (str + i);
	}
	return (NULL);
}

// Busca la última aparición de un carácter en una
// cadena y devuelve un puntero al último carácter
// encontrado o un puntero nulo si el carácter no
// está presente.

// int	main(void)
// {
// 	printf("%s", ft_strrchr("", 'z'));
// 	return (0);
// }
