/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 09:28:43 by aluslu            #+#    #+#             */
/*   Updated: 2025/11/11 13:07:15 by aluslu           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static size_t	count_tr_len(char const *s1, size_t *len, char const *set)
{
	size_t	right;
	size_t	left;

	left = 0;
	right = *len - 1;
	while (is_charset(s1[left], set) == 1)
	{
		*len = *len - 1;
		left++;
	}
	while (*len > 0 && is_charset(s1[right], set) == 1)
	{
		right--;
		*len = *len - 1;
	}
	return (left);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	size_t	len;
	size_t	begin;
	size_t	i;

	len = ft_strlen(s1);
	begin = count_tr_len(s1, &len, set);
	trimmed_str = (char *) malloc(sizeof(char) * (len + 1));
	if (!trimmed_str)
		return (NULL);
	trimmed_str[len] = '\0';
	i = 0;
	while (i < len)
	{
		trimmed_str[i] = s1[begin + i];
		i++;
	}
	return ((char *) trimmed_str);
}

/*
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		__builtin_printf("%s", ft_strtrim(av[1], av[2]));
	}
}*/
