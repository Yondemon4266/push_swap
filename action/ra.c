/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:21:40 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/10 08:49:17 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ra(t_stack *a)
{
	if (!a)
		return (0);
	if (a->index_top <= 0)
		return (0);
	int i;
	int temps;
	if (a->index_top == 1)
	{
		swap(&a->array[1], &a->array[0]);
		return (1);
	}
	i = a->index_top;
	temps = a->array[a->index_top];
	while (i > 0)
	{
		// __builtin_printf("stack a: %d\n",a->array[i]);
		a->array[i] = a->array[i - 1];
		i--;
	}
	a->array[0] = temps;
	return (0);
}

