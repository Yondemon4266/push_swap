/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 17:26:58 by mbichet           #+#    #+#             */
/*   Updated: 2026/01/04 15:32:00 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	simple(t_stack *a, t_bench_infos *infos)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	n = a->index_top;
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			if (j < n - i && a->array[n] > a->array[n - 1])
				infos->sa_count += sa(a, 1);
			infos->ra_count += ra(a, 1);
			j++;
		}
		i++;
	}
}
