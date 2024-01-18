/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:04:03 by afrias-d          #+#    #+#             */
/*   Updated: 2023/11/30 12:16:06 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int digit)
{
	if ((digit >= 48 && digit <= 57))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char	digit;

// 	digit = '5';
// 	printf("%d", ft_isdigit(digit));
// 	return (0);
// }
