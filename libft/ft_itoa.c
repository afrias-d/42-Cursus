/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:17:08 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/12 18:15:12 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	count_dig(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static char	*str_fill(unsigned int value, int i, char *str)
{
	while (value > 0)
	{
		str[i] = (value % 10) + '0';
		value = value / 10;
		i--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				i;
	int				x;
	unsigned int	value;

	x = count_dig(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * (x + 1));
	if (!str)
		return (0);
	str[x] = '\0';
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	value = n;
	i = x - 1;
	str = str_fill(value, i, str);
	return (str);
}

// Crea una string a partir de un int.
// Para ello, devuelvo el int mínimo con
// strdup. Luego creo una reserva de memoria
// para el número de dígitos en el caso de que
// sea diferente al int mínimo y controlo si
// es 0 o si es negativo. Una vez contolado
// esto relleno la string convirtiendo cada dígito
// a char.

// int main()
// {
// 	int	x;

// 	x = 9234453;
// 	// printf("%d\n", count_dig(x));
// 	printf("%s", ft_itoa(x));
// 	return (0);
// }
