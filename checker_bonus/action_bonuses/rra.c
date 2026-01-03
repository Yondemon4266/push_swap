/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:10:18 by mbichet           #+#    #+#             */
/*   Updated: 2026/01/03 18:47:17 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

int	rra(t_stack *a)
{
	int	i;
	int	temps;
	int	temps_rank;

	if (a->index_top == 1)
	{
		swap(&a->array[1], &a->array[0]);
		swap(&a->ranks[1], &a->ranks[0]);
		return (1);
	}
	i = 0;
	temps = a->array[0];
	temps_rank = a->ranks[0];
	while (i < a->index_top)
	{
		a->array[i] = a->array[i + 1];
		a->ranks[i] = a->ranks[i + 1];
		i++;
	}
	a->ranks[a->index_top] = temps_rank;
	a->array[a->index_top] = temps;
	return (1);
}
