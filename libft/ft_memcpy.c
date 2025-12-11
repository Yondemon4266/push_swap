/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:56:20 by aluslu            #+#    #+#             */
/*   Updated: 2025/11/10 16:17:36 by aluslu           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ucdest;
	unsigned char	*ucsrc;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	ucdest = (unsigned char *)dest;
	ucsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ucdest[i] = ucsrc[i];
		i++;
	}
	return (ucdest);
}

/*
#include <string.h>
int	main()
{
	char	dest[5] = "hello";
	char	src[10] = "abcdefghij";

	__builtin_printf("%s\n", (char *)ft_memcpy(dest, src, 2));
	__builtin_printf("%s", (char *)memcpy(dest, src, 2));
}*/
