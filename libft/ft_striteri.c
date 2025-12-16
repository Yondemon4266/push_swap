/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:25:06 by aluslu            #+#    #+#             */
/*   Updated: 2025/11/12 15:53:13 by aluslu           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	change(unsigned int i, char *c)
{
	i++;
	*c = *c + 1;
}
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*int	main(int ac, char **av)
{
	if (ac == 2)
	{
		char	*str = av[1];
		ft_striteri(str, &change);
		__builtin_printf("changed str: %s", str);
	}
}*/
