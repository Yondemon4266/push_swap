/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:07:09 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/09 15:18:39 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rb(t_stack *b)
{
	int i;
	int temps;
	
	i = b->index_top;
	temps = b->array[b->index_top];
	while (i > 0)
	{
		b->array[i] = b->array[i - 1];
		i--;
	}
	b->array[0] = temps;
	return (1);
}