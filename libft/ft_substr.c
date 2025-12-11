/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:44:14 by aluslu            #+#    #+#             */
/*   Updated: 2025/11/11 09:27:44 by aluslu           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	i;

	if (start >= ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	new = (char *) malloc(len + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (start + i < ft_strlen(s) && i < len)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*
int	main(int ac, char **av)
{
	if (ac == 4)
	{
		__builtin_printf("ft:%s\n", ft_substr(av[1], atoi(av[2]), atoi(av[3])));
		__builtin_printf("or:%s", ft_substrnew(av[1], atoi(av[2]), atoi(av[3])));
	}
}*/
