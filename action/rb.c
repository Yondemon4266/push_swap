/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:07:09 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/12 17:17:04 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rb(t_stack *b)
{
	if (!b)
		return (0);
	if (b->index_top <= 0)
		return (0);
	int i;
	int temps;

	if (b->index_top == 1)
	{
		swap(&b->array[1], &b->array[0]);
		return (1);
	}
	i = b->array[b->index_top];
	temps = b->array[b->index_top];
	while (i > 0)
	{
		b->array[i] = b->array[i - 1];
		i--;
	}
	b->array[0] = temps;
	return (1);
}