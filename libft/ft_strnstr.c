/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:34:04 by aluslu            #+#    #+#             */
/*   Updated: 2025/11/10 12:38:37 by aluslu           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	big_len;
	size_t	i;

	i = 0;
	big_len = ft_strlen(big);
	little_len = ft_strlen(little);
	if (little_len == 0 && little[0] == '\0')
		return ((char *)big);
	if (little_len > big_len || little_len > len)
		return (NULL);
	while (big[i] && i <= len - little_len)
	{
		if (ft_strncmp(&big[i], little, little_len) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("ft: %s\n", ft_strnstr(av[1], av[2], atoi(av[3])));
		printf("or: %s", strnstr(av[1], av[2], atoi(av[3])));
	}
}*/
