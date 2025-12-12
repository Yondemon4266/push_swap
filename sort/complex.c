/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 12:04:11 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/11 17:02:00 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int dispach(t_stack *a, t_stack *b, int i)
{
	int j;
	int top;
	int size;
	
	j = 0;
	size = a->index_top + 1;
	while (j < size)
	{
		top = a->array[a->index_top];
		if (((top ^ 0x80000000) >> i) & 1)
			ra(a);
		else
			pb(a, b);
		j++;
	}
	while (b->index_top != -1)
		pa(a, b);
	i = a->index_top;
	while (i)
	{
		if (a->array[i] > a->array[i - 1])
			return (0);
		i--;
	}
	return (2);
}

int radix(t_stack *a, t_stack *b)
{
    int i;
	int j;
    int max_bits = 20; 

    i = 0;
	j = 0;
    while (i < max_bits && j == 0)
    {
		j = dispach(a,b,i);
        i++;
    }
    return (0);
}
