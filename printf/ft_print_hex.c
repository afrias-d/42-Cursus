/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:30:43 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/18 13:59:17 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static	int	count_digits_hex(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

int	ft_puthex_low(unsigned int n)
{
	char	num;
	char	*hex_digits;
	int		i;

	i = count_digits_hex(n);
	hex_digits = "0123456789abcdef";
	if (n >= 16)
		ft_puthex_low(n / 16);
	num = hex_digits[n % 16];
	write(1, &num, 1);
	return (i);
}

int	ft_puthex_up(unsigned int n)
{
	char	num;
	char	*hex_digits;
	int		i;

	i = count_digits_hex(n);
	hex_digits = "0123456789ABCDEF";
	if (n >= 16)
		ft_puthex_up(n / 16);
	num = hex_digits[n % 16];
	write(1, &num, 1);
	return (i);
}
