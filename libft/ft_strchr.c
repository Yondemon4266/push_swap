/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:20:15 by aluslu            #+#    #+#             */
/*   Updated: 2025/11/10 09:13:50 by aluslu           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	if ((unsigned char)s[i] == (unsigned char)c)
		return ((char *)s + i);
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("or: %s\n", strchr(av[1], av[2][0]));
		printf("ft: %s\n", ft_strchr(av[1], av[2][0]));
		printf("ft2:%s\n", ft_strchr(av[1], 't' + 256));
		printf("or2:%s", strchr(av[1], 't' + 256));

	}
}*/
