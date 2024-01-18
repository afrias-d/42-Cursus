/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:33:30 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/15 18:12:36 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static	int	count_digits_ptr(unsigned long long n)
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

static void	ft_print_ptr(unsigned long long n)
{
	char	num;
	char	*hex_digits;
	int		i;

	hex_digits = "0123456789abcdef";
	if (n >= 16)
		ft_print_ptr(n / 16);
	num = hex_digits[n % 16];
	write(1, &num, 1);
}

int	ft_putptr(void *ptr)
{
	unsigned long long	n;
	int					i;

	n = (unsigned long long)ptr;
	i = count_digits_ptr(n);
	i += ft_printstr("0x");
	ft_print_ptr(n);
	return (i);
}
