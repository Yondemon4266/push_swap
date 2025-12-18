/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 10:35:07 by aluslu            #+#    #+#             */
/*   Updated: 2025/12/18 10:15:14 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	find_pos(t_stack *b, int target)
{
	int	i;

	i = 0;
	while (i <= b->index_top)
	{
		if (b->ranks[i] == target)
			return (i);
		i++;
	}
	return (-1);
}

static void	back_to_a(t_stack *a, t_stack *b, t_bench_infos *infos)
{
	int	pos;
	int	target;

	target = b->index_top;
	while (b->index_top >= 0)
	{
		pos = find_pos(b, target);
		if (pos > b->index_top / 2)
		{
			while (b->ranks[b->index_top] != target)
				infos->rb_count += rb(b);
		}
		else
		{
			while (b->ranks[b->index_top] != target)
				infos->rrb_count += rrb(b);
		}
		infos->pa_count += pa(a, b);
		target--;
	}
}

void	medium(t_stack *a, t_stack *b, t_bench_infos *infos)
{
	int	i;
	int	range;

	i = 0;
	range = 15;
	while (a->index_top >= 0)
	{
		if (a->ranks[a->index_top] <= i)
		{
			infos->pb_count += pb(a, b);
			infos->rb_count += rb(b);
			i++;
		}
		else if (a->ranks[a->index_top] <= i + range)
		{
			infos->pb_count += pb(a, b);
			i++;
		}
		else
			infos->ra_count += ra(a);
	}
	back_to_a(a, b, infos);
}
