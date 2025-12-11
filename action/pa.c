/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 12:41:21 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/09 15:17:51 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	pa(t_stack *a, t_stack *b)
{
	if (!a || !b)
		return (0);
	if (b->index_top == -1)
		return (0);
	a->index_top += 1;
	a->array[a->index_top] = b->array[b->index_top];
	b->index_top -= 1;
	return (1);
}
