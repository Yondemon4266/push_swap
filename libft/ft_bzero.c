/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:14:00 by aluslu            #+#    #+#             */
/*   Updated: 2025/11/10 13:36:35 by aluslu           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ucs;
	size_t			i;

	i = 0;
	ucs = (unsigned char *)s;
	while (i < n)
	{
		ucs[i] = 0;
		i++;
	}
}

/*
#include <bsd/string.h>

int	main(void)
{
	char tab[5] = "hello";
	char tab2[5] = "hello";

	ft_bzero(NULL, 2);
	bzero(NULL, 2);
	int	i;

	i = 0;
	while (i < 5)
	{
		__builtin_printf("%d", tab[i]);
		i++;
	}
	__builtin_printf("\n");
	i = 0;
	while (i < 5)
	{
		__builtin_printf("%d", tab2[i]);
		i++;
	}
}*/
