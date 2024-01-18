/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias-d <afrias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:11:34 by afrias-d          #+#    #+#             */
/*   Updated: 2023/12/27 12:27:52 by afrias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static char	*solve_line(char *tmp, char *buf, int fd)
{
	ssize_t	n_bytes;
	char	*n_tmp;

	n_bytes = 1;
	while (n_bytes > 0)
	{
		n_bytes = read(fd, buf, BUFFER_SIZE);
		if (n_bytes == -1)
		{
			free(tmp);
			return (NULL);
		}
		else if (n_bytes == 0)
			break ;
		buf[n_bytes] = 0;
		if (!tmp)
			tmp = ft_strdup("");
		n_tmp = tmp;
		tmp = ft_strjoin(n_tmp, buf);
		free(n_tmp);
		n_tmp = NULL;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	return (tmp);
}

static char	*fill_rest(char *line)
{
	char	*tmp;
	int		i;

	i = 0;
	while (line[i] != '\n' && line[i] != '\0')
		i++;
	if (line[i] == 0)
		return (NULL);
	tmp = ft_substr(line, i + 1, ft_strlen(line) - i);
	if (*tmp == 0)
	{
		free(tmp);
		tmp = NULL;
	}
	line[i + 1] = 0;
	return (tmp);
}

char	*get_next_line(int fd)
{
	char		*buf;
	char		*line;
	static char	*tmp;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free (tmp);
		tmp = NULL;
		return (NULL);
	}
	buf = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	line = solve_line(tmp, buf, fd);
	free(buf);
	buf = NULL;
	if (!line)
		return (NULL);
	tmp = fill_rest(line);
	return (line);
}

// int	main(void)
// {
// 	int	fd;

// 	fd = open("./file_demo.txt", O_RDONLY);
// 	if (fd == -1)
// 	{
// 		printf("Error opening file");
// 		return (1);
// 	}
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	close(fd);
// 	return (0);
// }
