/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:10:18 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/17 18:46:29 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rra(t_stack *a)
{
	ft_putendl_fd("rra", 1);
	if (!a)
		return (1);
	if (a->index_top <= 0)
		return (1);
	int i;
	int temps;
	int	temps_rank;
	if (a->index_top == 1)
	{
		swap(&a->array[1], &a->array[0]);
		swap(&a->ranks[1], &a->ranks[0]);
		return (1);
	}
	i = 0;
	temps = a->array[0];
	temps_rank = a->ranks[0];
	while (i < a->index_top)
	{
		a->array[i] = a->array[i + 1];
		a->ranks[i] = a->ranks[i + 1];
		i++;
	}
	a->ranks[a->index_top] = temps_rank;
	a->array[a->index_top] = temps;
	return (1);
}