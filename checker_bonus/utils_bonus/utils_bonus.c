/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:32:46 by aluslu            #+#    #+#             */
/*   Updated: 2026/01/05 12:03:54 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

static float	compute_disorder(t_stack *stack_a)
{
	float	mistakes;
	float	total_pairs;
	int		i;
	int		j;

	if (stack_a->index_top <= 0)
		return (0);
	mistakes = 0;
	total_pairs = 0;
	i = 0;
	j = 0;
	while (i < stack_a->index_top)
	{
		j = i + 1;
		while (j <= stack_a->index_top)
		{
			total_pairs += 1;
			if (stack_a->array[i] < stack_a->array[j])
				mistakes += 1;
			j++;
		}
		i++;
	}
	return (mistakes / total_pairs);
}

int	is_stack_sorted(t_stack *a)
{
	float	disorder;

	disorder = compute_disorder(a);
	if (disorder == 0)
		return (1);
	return (0);
}
