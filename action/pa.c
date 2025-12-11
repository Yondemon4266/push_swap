/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 12:41:21 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/11 12:36:38 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	pa(t_stack *a, t_stack *b)
{
	printf("pa\n");
	a->index_top += 1;
	a->array[a->index_top] = b->array[b->index_top];
	b->index_top -= 1;
	return (1);
}
