/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:33:13 by aluslu            #+#    #+#             */
/*   Updated: 2025/11/13 16:02:31 by aluslu           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ucsrc;
	unsigned char	*ucdest;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	ucsrc = (unsigned char *)src;
	ucdest = (unsigned char *)dest;
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			ucdest[i] = ucsrc[i];
			i++;
		}
		return (dest);
	}
	else
	{
		i = n;
		while (i-- > 0)
			ucdest[i] = ucsrc[i];
		return (dest);
	}
}

/*#include <string.h>

int	main()
{
	char	tab[8] = "ABCDEFG";
	char	mine[8] = "ABCDEFG";
	size_t 	i;

	i = 5;
	memmove(tab, ((const void*)0), i);
	ft_memmove(tab, (const void*)0, i);
	__builtin_printf("%s\n", tab);
	__builtin_printf("%s", mine);
}*/
