/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:04:13 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/16 14:47:48 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

#define MAX_ITER 100

int	ft_sqrt(int nb)
{
	int		i;
	double	x;

	i = 1;
	x = 1;
	while (nb > 0 && i++ < MAX_ITER)
		x = 0.5 * (x + (nb / x));
	if (((int)(x * 10)) % 10 == 0)
		return (x);
	return (x + 1);
}

int	medium(t_stack *a, t_stack *b)
{
	return (0);
}