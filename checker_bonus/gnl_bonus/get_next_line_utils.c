/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:55:53 by mbichet           #+#    #+#             */
/*   Updated: 2025/11/26 09:28:00 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	len_next_line(char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		return (i + 1);
	return (0);
}

size_t	ft_strlen(const	char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_realloc(char *src, size_t add)
{
	size_t	len_src;
	char	*dest;
	size_t	i;

	len_src = ft_strlen(src);
	dest = malloc(len_src + add + 1);
	if (!dest)
	{
		free(src);
		return (NULL);
	}
	if (src)
	{
		i = 0;
		while (i < len_src)
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[len_src] = '\0';
	free(src);
	return (dest);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	res;
	size_t	len_dest;
	size_t	len_s;

	len_s = ft_strlen(src);
	i = 0;
	len_dest = ft_strlen(dst);
	if (size > len_dest)
		res = len_s + len_dest;
	else
		res = len_s + size;
	while (src[i] && (i < size - len_dest - 1))
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	dst[len_dest + i] = '\0';
	return (res);
}

int	clear_buffer(char *buffer, int pos)
{
	size_t	len;
	size_t	i;

	if (pos <= 0)
		return (0);
	len = ft_strlen(buffer + pos);
	i = 0;
	while (i <= len)
	{
		buffer[i] = buffer [pos + i];
		i++;
	}
	if (len < BUFFER_SIZE)
	{
		i = len;
		while (i < BUFFER_SIZE)
		{
			buffer[i] = '\0';
			i++;
		}
	}
	return (1);
}
