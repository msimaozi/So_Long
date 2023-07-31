/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:07:08 by msimaozi          #+#    #+#             */
/*   Updated: 2023/07/06 10:22:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "libft/libft.h"

char	*ft_save(char *save)
{
	int		x;
	int		y;
	char	*dest;

	x = 0;
	while (save[x] && save[x] != '\n')
		x++;
	if (!save[x])
	{
		free(save);
		return (0);
	}
	dest = malloc((ft_strlen(save) - x + 1));
	if (!dest)
		return (0);
	x++;
	y = 0;
	while (save[x])
		dest[y++] = save[x++];
	dest[y] = '\0';
	free(save);
	return (dest);
}

char	*ft_getline(char *save)
{
	size_t	x;
	size_t	y;
	char	*line;

	x = 0;
	y = 0;
	if (!save[x])
		return (0);
	while (save[x] && save[x] != '\n')
		x++;
	line = malloc((x + 2) * sizeof(char));
	if (!line)
		return (0);
	while (y <= x)
	{
		line[y] = save[y];
		y++;
	}
	line[y] = '\0';
	return (line);
}

char	*ft_readsave(int fd, char *save)
{
	char	*buf;
	int		readbytes;

	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (0);
	readbytes = 1;
	while (!ft_strchr(save, '\n') && readbytes > 0)
	{
		readbytes = read(fd, buf, BUFFER_SIZE);
		if (readbytes == -1)
		{
			free(buf);
			free(save);
			return (0);
		}
		buf[readbytes] = '\0';
		save = ft_strjoin_2(save, buf);
	}
	free(buf);
	return (save);
}

char	*get_next_line(int fd)
{
	static char	*save[FOPEN_MAX];
	char		*line;

	if (fd < 0 || fd > FOPEN_MAX || BUFFER_SIZE <= 0)
		return (0);
	save[fd] = ft_readsave(fd, save[fd]);
	if (!save[fd])
		return (0);
	line = ft_getline(save[fd]);
	save[fd] = ft_save(save[fd]);
	return (line);
}

/*int	main(void)
{
	int		fd;
	int		x;
	char	*line;

	fd = open("files/41_no_nl.txt", O_RDONLY);
	x = 1;
	while ((line = get_next_line(fd)))
	{
		printf("line [%2d]: %s", x, line);
		free(line);
		x++;
	}
	close(fd);
	return (0);
}*/
