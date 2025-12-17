/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:07:09 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/17 11:32:19 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rb(t_stack *b)
{
	int	i;
	int	temps;
	int temps_rank;
	
	ft_putendl_fd("ra", 1);
	if (!b)
		return (1);
	if (b->index_top <= 0)
		return (1);
	i = b->index_top;
	temps = b->array[b->index_top];
	temps_rank = b->ranks[b->index_top];
	while (i > 0)
	{
		b->array[i] = b->array[i - 1];
		b->ranks[i] = b->ranks[i - 1];
		i--;
	}
	b->array[0] = temps;
	b->ranks[0] = temps_rank;
	return (1);
}