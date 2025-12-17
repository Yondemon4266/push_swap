/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:22:45 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/17 11:22:21 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rrb(t_stack *b)
{
	if (!b)
		return (1);
	if (b->index_top <= 0)
		return (1);
	int i;
	int temps;
	if (b->index_top == 1)
	{
		swap(&b->array[1], &b->array[0]);
		return (1);
	}
	i = 0;
	temps = b->array[0];
	while (i < b->index_top)
	{
		b->array[i] = b->array[i + 1];
		i--;
	}
	b->array[b->index_top] = temps;
	return (1);
}