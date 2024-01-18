/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:45:12 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/12 17:52:46 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return ((num) * sign);
}

// La función atoi convierte una string en int,
// para ello ignora los espacios y otros caractéres
// parecidos. Después mira el signo, siempre que
// se repita solo una vez. Una vez que tiene todo
// convierte cada número del string (siempre que
// sea un número) en int y lo multiplica por el
// número.

// int	main(void)
// {
// 	printf("%d", ft_atoi("   -214748"));
// 	return (0);
// }
