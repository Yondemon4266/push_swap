/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:22:45 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/09 15:23:32 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rrb(t_stack *b)
{
	int i;
	int temps;
	
	i = 0;
	temps = b->array[0];
	while (i < b->index_top - 1)
	{
		b->array[i] = b->array[i + 1];
		i++;
	}
	b->array[b->index_top] = temps;
	return (0);
}