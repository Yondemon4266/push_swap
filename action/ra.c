/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:21:40 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/10 10:02:50 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ra(t_stack *a)
{
	int i;
	int temps;
	
	printf("ra\n");
	i = a->index_top;
	temps = a->array[a->index_top];
	while (i > 0)
	{
		a->array[i] = a->array[i - 1];
		i--;
	}
	a->array[0] = temps;
	return (0);
}

