/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:21:40 by mbichet           #+#    #+#             */
/*   Updated: 2026/01/04 18:46:41 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

int	ra(t_stack *a, int do_print)
{
	int	i;
	int	temps;
	int	temps_rank;

	if (do_print == 1)
		ft_putendl_fd("ra", 1);
	if (!a)
		return (1);
	if (a->index_top <= 0)
		return (1);
	i = a->index_top;
	temps = a->array[a->index_top];
	temps_rank = a->ranks[a->index_top];
	while (i > 0)
	{
		a->array[i] = a->array[i - 1];
		a->ranks[i] = a->ranks[i - 1];
		i--;
	}
	a->array[0] = temps;
	a->ranks[0] = temps_rank;
	return (1);
}
