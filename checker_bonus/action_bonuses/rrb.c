/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:22:45 by mbichet           #+#    #+#             */
/*   Updated: 2026/01/03 18:47:19 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

int	rrb(t_stack *b)
{
	int	i;
	int	temps;
	int	temps_rank;

	if (b->index_top == 1)
	{
		swap(&b->array[1], &b->array[0]);
		swap(&b->ranks[1], &b->ranks[0]);
		return (1);
	}
	i = 0;
	temps = b->array[0];
	temps_rank = b->ranks[0];
	while (i < b->index_top)
	{
		b->array[i] = b->array[i + 1];
		b->ranks[i] = b->ranks[i + 1];
		i++;
	}
	b->ranks[b->index_top] = temps_rank;
	b->array[b->index_top] = temps;
	return (1);
}
