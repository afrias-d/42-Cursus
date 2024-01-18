/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:23:24 by afrias-d          #+#    #+#             */
/*   Updated: 2023/11/30 12:16:08 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isprint(int printable)
{
	if ((printable >= 32 && printable <= 126))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char	printable;

// 	printable = '\0';
// 	printf("%d", ft_isprint(printable));
// 	return (0);
// }
