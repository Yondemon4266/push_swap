/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:49:36 by aluslu            #+#    #+#             */
/*   Updated: 2025/11/06 11:13:38 by aluslu           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ucs;

	ucs = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ucs[i] = (unsigned char)c;
		i++;
	}
	return (ucs);
}

/*int	main(void)
{
	char	tab[10] = "abcdefghij";
	__builtin_printf("%s", (char *) ft_memset(tab, 'j', 8));
}*/
