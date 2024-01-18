/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:18:57 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/12 19:08:51 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	char			*str;
	unsigned char	uc;

	str = (char *)s;
	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)str[i] != uc)
			i++;
		else if ((unsigned char)str[i] == uc)
			return (str + i);
	}
	return (NULL);
}

// Devuelve la string desde el int que hay que encontrar
// string dada y buscando en los n primeros caracteres.

// int	main(void)
// {
// 	printf("%s", ft_memchr("hola mundo", 'm', 9));
// 	return (0);
// }
