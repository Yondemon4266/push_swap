/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 17:26:58 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/16 12:24:52 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	simple(t_stack *a)
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
			{
				sa(a);
				printf("sa\n");
			}
			ra(a);
			printf("ra\n");
			j++;
		}
		i++;
	}
	return (0);
}
