/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:47:47 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/13 18:24:13 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	len;
	size_t	i;

	len = 0;
	while (src[len] != '\0')
		len++;
	i = 0;
	if (destsize > 0)
	{
		while ((src[i] != '\0') && (i < destsize - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

// Copia los caractéres de las posciones indicadas
// en destsize de src a dest.

// int	main(void)
// {
// 	const char	str[20] = "hola mundo, que tal";
// 	char		dest[4] = "adi";

// 	printf("%zu %s\n", ft_strlcpy(dest, str, 0), dest);
// 	return (0);
// }
