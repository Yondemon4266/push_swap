/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:13:24 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/09 15:18:06 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	pb(t_stack *a, t_stack *b)
{
	b->index_top += 1;
	b->array[b->index_top] = a->array[a->index_top];
	a->index_top -= 1;
	return (1);
}