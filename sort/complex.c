/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 10:41:04 by aluslu            #+#    #+#             */
/*   Updated: 2025/12/17 11:20:41 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	count_binary_size(int nb)
{
	int	count;

	count = 0;
	if (nb <= 0)
		return (0);
	while (nb != 0)
	{
		nb /= 2;
		count++;
	}
	return (count);
}

int complex(t_stack *a, t_stack *b, t_bench_infos *infos)
{
	int size;
    int i;
    int j;
	int	limit;
	
	limit = a->index_top;
	size = count_binary_size(a->index_top);
    i = 0;
    while (i < size)
    {
        j = 0;
		while (j <= limit)
		{
			if (!((a->ranks[a->index_top] >> i) & 1))
				infos->pb_count += pb(a, b);
			else
				infos->ra_count += ra(a);
			j++;
		}
		while (b->index_top != -1)
			infos->pa_count += pa(a, b);
        i++;
    }
    return (0);
}

