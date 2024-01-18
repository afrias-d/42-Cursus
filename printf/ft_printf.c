/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:46:20 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/27 14:07:37 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	format_converse(va_list args, char c)
{
	int	i;
	int	arg;

	i = 0;
	if (c == 'c')
		i += ft_printchar((char)va_arg(args, int));
	if (c == 's')
		i += ft_printstr(va_arg(args, char *));
	if (c == 'p')
		i += ft_putptr(va_arg(args, void *));
	if (c == 'd' || c == 'i')
		i += ft_printnbr(va_arg(args, int));
	if (c == 'u')
		i += ft_printnbr_uns(va_arg(args, int));
	if (c == 'x')
		i += ft_puthex_low(va_arg(args, int));
	if (c == 'X')
		i += ft_puthex_up(va_arg(args, int));
	if (c == '%')
		i += ft_printchar('%');
	return (i);
}

int	format_check(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i')
		return (1);
	if (c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	else
		return (0);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		i;
	int		cont;

	va_start(args, format);
	i = 0;
	cont = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format_check(format[i + 1]) == 1)
		{
			cont += format_converse(args, format[i + 1]);
			i += 2;
		}
		else
		{
			ft_printchar(format[i]);
			i++;
			cont++;
		}
	}
	va_end(args);
	return (cont);
}

// int main ()
// {
// 	int valor = -2147483648;
//     int *puntero = &valor;
// 	printf("Imprime el resultado: %d\n", printf("%d", valor));
// 	printf("Imprime el resultado: %d\n", ft_printf("%d", valor));
// 	return (0);
// }
