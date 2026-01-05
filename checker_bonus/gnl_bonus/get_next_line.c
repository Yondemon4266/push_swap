/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:55:59 by mbichet           #+#    #+#             */
/*   Updated: 2026/01/05 10:34:45 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	cpy_line(char buffer[BUFFER_SIZE + 1], char **dest, size_t decal)
{
	size_t	len ;

	len = ft_strlen(*dest);
	*dest = ft_realloc(*dest, decal);
	if (!*dest)
		return (0);
	ft_strlcat(*dest, buffer, len + decal + 1);
	return (1);
}

int	get_new_line(char buffer[BUFFER_SIZE + 1], char **dest)
{
	size_t	len;

	len = len_next_line(buffer);
	if (len > 0)
	{
		if (!cpy_line(buffer, dest, len))
			return (-1);
		clear_buffer(buffer, (int)len);
		return (1);
	}
	if (!buffer[0])
		return (0);
	len = ft_strlen(buffer);
	if (!cpy_line(buffer, dest, len))
		return (-1);
	clear_buffer(buffer, (int)len);
	return (0);
}

int	read_buffer(int fd, char buffer[BUFFER_SIZE + 1], ssize_t *status,
				char **dest)
{
	int	result;

	if (!buffer[0])
	{
		*status = read(fd, buffer, BUFFER_SIZE);
		if (*status < 0)
			return (-2);
		buffer[*status] = '\0';
	}
	result = get_new_line(buffer, dest);
	return (result);
}

char	*gnl_finish(char **line, ssize_t status)
{
	if (status < 0)
	{
		free(*line);
		return (NULL);
	}
	if (!*line)
		return (NULL);
	return (*line);
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*dest;
	int			result;
	ssize_t		status;

	if (fd < 0 || fd > FOPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	dest = NULL;
	status = 1;
	while (status > 0 || buffer[0])
	{
		result = read_buffer(fd, buffer, &status, &dest);
		if (result == 1)
			return (dest);
		if (result < 0)
		{
			if (result == -1)
				status = -1;
			break ;
		}
	}
	return (gnl_finish(&dest, status));
}
