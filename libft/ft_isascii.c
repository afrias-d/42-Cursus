/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:17:27 by afrias-d          #+#    #+#             */
/*   Updated: 2023/11/30 12:16:04 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isascii(int ascii)
{
	if ((ascii >= 0 && ascii <= 127))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char	ascii;

// 	ascii = 'á';
// 	printf("%d", ft_isascii(ascii));
// 	return (0);
// }
