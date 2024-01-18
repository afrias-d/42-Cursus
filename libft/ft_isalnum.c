/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:12:30 by afrias-d          #+#    #+#             */
/*   Updated: 2023/11/30 12:16:01 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int alnum)
{
	if ((alnum >= 65 && alnum <= 90) || (alnum >= 97 && alnum <= 122)
		|| (alnum >= 48 && alnum <= 57))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char	alnum;

// 	alnum = ' ';
// 	printf("%d", ft_isalnum(alnum));
// 	return (0);
// }
