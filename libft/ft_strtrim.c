/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:24:57 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/13 18:36:16 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	beg(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && set[j] != '\0')
	{
		if (s1[i] == set[j])
		{
			j = 0;
			i++;
		}
		else if (s1[i] != set[j])
			j++;
	}
	return (i);
}

int	end(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (s1[i] != '\0' && set[j] != '\0')
	{
		if (s1[i] == set[j])
		{
			j = 0;
			i--;
		}
		else if (s1[i] != set[j])
			j++;
	}
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	if (!s1 || !set)
		return (0);
	if (end(s1, set) <= beg(s1, set))
		return (ft_strdup(""));
	len = end(s1, set) - beg(s1, set);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	i = beg(s1, set);
	j = 0;
	while (j < len)
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

// Elimina los espacios en blanco u otros caracteres
// específicos del principio y el final de una cadena
// de caracteres (string), dejando solo el contenido
// significativo.

// int main()
// {
// 	char	*s1;
// 	char	*set;

// 	s1 = "  lorem ipsum dolor sit amet  ";
// 	set = " ";
// 	printf("%s", ft_strtrim(s1, set));
// 	return (0);
// }
