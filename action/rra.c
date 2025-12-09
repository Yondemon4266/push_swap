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
	int i;
	int temps;
	
	i = 0;
	temps = a->array[0];
	while (i < a->index_top - 1)
	{
		a->array[i] = a->array[i + 1];
		i++;
	}
	a->array[a->index_top] = temps;
	return (0);
}
