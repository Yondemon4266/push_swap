/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:37:05 by aluslu            #+#    #+#             */
/*   Updated: 2025/11/11 09:24:36 by aluslu           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	while (src[i] != '\0' && i + 1 < size)
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	return (src_len);
}

/*
#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	char	*tab;
	char	*tab2;

	tab = malloc(10);
	if (!tab)
		return (-1);
	tab2 = malloc(10);
	if (!tab2)
		return (-1);
	if (ac == 3)
	{
	printf("ft:long copiee %zu\n",ft_strlcpy(tab,av[1],atoi(av[2])));
		printf("ft:dest copiee %s\n",tab);
	printf("original:long copiee %zu\n",strlcpy(tab2, av[1],atoi(av[2])));
		printf("original:dest copiee %s\n",tab2);
	}
}*/
