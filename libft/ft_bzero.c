/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:03:05 by afrias-d          #+#    #+#             */
/*   Updated: 2023/11/30 12:56:42 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*change;
	size_t	i;

	change = (char *)s;
	i = 0;
	while (i < n)
	{
		change[i] = 0;
		i++;
	}
}

// Completa la string dada con 0 (valores nulos)

// int	main(void)
// {
// 	char s[] = "hola todo el mundo";
// 	ft_bzero(s, 20);
// 	printf("%s", s);
// 	return (0);
// }
