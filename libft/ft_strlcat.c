/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:57:40 by aluslu            #+#    #+#             */
/*   Updated: 2025/11/07 16:10:09 by aluslu           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	src_len = 0;
	dst_len = 0;
	i = 0;
	while (dst[dst_len])
		dst_len++;
	while (src[src_len])
		src_len++;
	if (size <= dst_len)
		return (src_len + size);
	while (src[i] && (i + dst_len + 1 < size))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}

/*
#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	char	dest1[50] = "hello";
	char	dest2[50] = "hello";
	size_t	a;
	size_t	b;

	a = ft_strlcat(dest1, av[1], (size_t) atoi(av[2]));
	b = strlcat(dest2, av[1], (size_t) atoi(av[2]));
	printf("ft : %s\n", dest1);
	printf("ft : %zu\n", a);
	printf("or : %s\n", dest2);
	printf("or : %zu", b);
}*/
