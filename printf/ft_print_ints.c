/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ints.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:24:12 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/15 18:12:33 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static	int	count_digits_ints(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_printnbr(int n)
{
	char	num;
	int		i;

	i = count_digits_ints(n);
	if (n == -2147483648)
		i = ft_printstr("-2147483648");
	else if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		ft_printnbr(n);
		i++;
	}
	else
	{
		if (n >= 10)
		{
			ft_printnbr(n / 10);
			ft_printnbr(n % 10);
		}
		else
			ft_printchar(n + '0');
	}
	return (i);
}
