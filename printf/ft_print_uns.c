/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:10:49 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/15 18:12:38 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static	int	count_digits_others(unsigned int n)
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

int	ft_printnbr_uns(unsigned int n)
{
	char	num;
	int		i;

	i = count_digits_others(n);
	if (n >= 0)
	{
		if (n >= 10)
		{
			ft_printnbr_uns(n / 10);
			ft_printnbr_uns(n % 10);
		}
		else
			ft_printchar(n + '0');
		return (i);
	}
	return (0);
}
