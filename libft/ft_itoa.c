/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:57:32 by aluslu            #+#    #+#             */
/*   Updated: 2025/11/13 16:24:41 by aluslu           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_nbr_len(int n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*edge_cases(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	return (NULL);
}

static void	fill_edges(char *res, size_t nbr_len, size_t is_negative)
{
	if (is_negative)
		res[0] = '-';
	res[nbr_len] = '\0';
}

char	*ft_itoa(int n)
{
	size_t	is_negative;
	char	*res;
	size_t	nbr_len;

	res = NULL;
	is_negative = 0;
	if (n == 0 || n == INT_MIN)
		return (edge_cases(n));
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	nbr_len = count_nbr_len(n) + is_negative;
	res = (char *)malloc(sizeof(char) * (nbr_len + 1));
	if (!res)
		return (NULL);
	fill_edges(res, nbr_len, is_negative);
	while (nbr_len > is_negative)
	{
		nbr_len--;
		res[nbr_len] = (n % 10) + '0';
		n /= 10;
	}
	return (res);
}

/*int	main(int ac, char **av)
{
	ac++;
	__builtin_printf("chaine: %s", ft_itoa(atoi(av[1])));
}*/
