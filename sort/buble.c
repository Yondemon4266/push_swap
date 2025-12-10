/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 17:26:58 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/10 11:29:18 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	buble(t_stack *a)
{
	int i;
	int j;
	int n;

	i = 0;
	n = a->index_top;
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			if (j < n - i && a->array[n] > a->array[n- 1])
			{
				sa(a);
				ft_putstr("sa\n");
			}
			ra(a);
			ft_putstr("ra\n");
			j++;
		}
		i++;
	}
	return (1);
}
