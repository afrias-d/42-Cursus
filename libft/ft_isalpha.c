/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:13:43 by afrias-d          #+#    #+#             */
/*   Updated: 2023/11/30 12:16:02 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int alpha)
{
	if ((alpha >= 65 && alpha <= 90) || (alpha >= 97 && alpha <= 122))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char	alpha;

// 	alpha = 'a';
// 	printf("%d", ft_isalpha(alpha));
// 	return (0);
// }
