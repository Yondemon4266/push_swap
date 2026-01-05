/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:05:15 by mbichet           #+#    #+#             */
/*   Updated: 2026/01/04 15:22:41 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sa(t_stack *a, int do_print)
{
	if (do_print == 1)
		ft_putendl_fd("sa", 1);
	if (!a || a->index_top <= 0)
		return (1);
	swap(&a->array[a->index_top], &a->array[a->index_top - 1]);
	swap(&a->ranks[a->index_top], &a->ranks[a->index_top - 1]);
	return (1);
}
