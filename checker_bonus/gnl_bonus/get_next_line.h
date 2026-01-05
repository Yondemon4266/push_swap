/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:56:01 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/01 14:40:35 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

int			clear_buffer(char *buffer, int pos);
char		*get_next_line(int fd);
char		*gnl_finish(char **line, ssize_t status);
int			read_buffer(int fd, char BUFFER[BUFFER_SIZE + 1],
				ssize_t *status, char **dest);
int			get_new_line(char BUFFER[BUFFER_SIZE + 1], char **dest);
int			cpy_line(char BUFFER[BUFFER_SIZE + 1], char **dest, size_t decal);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
char		*ft_realloc(char *buffer, size_t add);
size_t		ft_strlen(const	char *str);
size_t		len_next_line(char *str);

#endif