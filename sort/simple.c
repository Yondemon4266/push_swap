/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 17:26:58 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/17 17:26:45 by aluslu           ###   ########.fr       */
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
				infos->sa_count += sa(a);
			infos->ra_count += ra(a);
			j++;
		}
		i++;
	}
}
