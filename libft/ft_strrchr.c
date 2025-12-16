/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:44:53 by aluslu            #+#    #+#             */
/*   Updated: 2025/11/10 09:18:55 by aluslu           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;
	size_t	i;

	s_len = 0;
	while (s[s_len])
		s_len++;
	i = s_len + 1;
	while (i > 0)
	{
		i--;
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)s + i);
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("ft : %s\n", ft_strrchr(av[1], av[2][0]));
		printf("or : %s", strrchr(av[1], av[2][0]));
	}
}*/
