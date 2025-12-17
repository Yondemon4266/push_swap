/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:39:13 by aluslu            #+#    #+#             */
/*   Updated: 2025/12/12 16:02:38 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

long	ft_atoi(const char *nptr)
{
	long	result;
	int		sign;
	int		position;

	result = 0;
	sign = 1;
	position = 0;
	while (ft_isspace(nptr[position]) == 1)
		position++;
	if (nptr[position] == '+' || nptr[position] == '-')
	{
		if (nptr[position] == '-')
			sign = -sign;
		position++;
	}
	while (nptr[position] >= '0' && nptr[position] <= '9')
	{
		result = result * 10 + (nptr[position] - '0');
		position++;
	}
	return (result * sign);
}

/*#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("ft: %d\n", ft_atoi(av[1]));
		printf("or: %d", atoi(av[1]));
	}
}*/
