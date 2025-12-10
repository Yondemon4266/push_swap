/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:10:18 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/09 15:18:48 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rra(t_stack *a)
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
	i = 0;
	temps = a->array[0];
	while (i < a->index_top)
	{
		a->array[i] = a->array[i + 1]; 
		i++;
	}
	a->array[a->index_top] = temps;
	return (0);
}