/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:12:35 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/13 16:58:44 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static void	variables(size_t *i, int *j)
{
	*i = 0;
	*j = 0;
}

static void	*free_all(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static char	*fill_word(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = 0;
	return (word);
}

static int	count_words(const char *str, char c)
{
	int	count;
	int	x;

	count = 0;
	x = 0;
	while (*str)
	{
		if (*str != c && x == 0)
		{
			x = 1;
			count++;
		}
		else if (*str == c)
			x = 0;
		str++;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	size_t	i;
	int		j;
	int		start;

	variables(&i, &j);
	res = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!res)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			res[j] = fill_word(s, start, i);
			if (!res[j])
				return (free_all(res, j));
			j++;
		}
		else
			i++;
	}
	return (res);
}

// La función crea una matriz de strings en la que cada fila termina
// con un delimitador c dado que se usará en la string s. Para ello,
// se asigna memoria a la matriz. Después, se crea un bucle siempre
// que haya string y se marca el inicio de cada palabra delimitada por
// c. Esta palabra se rellena en la función fill_words que también
// crea una reserva de memoria. Si fill_word falla en algún momento,
// se libera todas las reservas de memoria con la función free_all.
// Finalmente, se devuelve la matriz.

// int	main(void)
// {
// 	char	**split;
// 	int		i;

// 	split = ft_split("  lorem   ipsum  y no    sé   que más ", ' ');
// 	i = 0;
// 	while (i < 7)
// 	{
// 		printf("%s\n", split[i]);
// 		i++;
// 	}
// 	return (0);
// }
