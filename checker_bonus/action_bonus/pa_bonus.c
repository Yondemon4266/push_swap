/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 12:41:21 by mbichet           #+#    #+#             */
/*   Updated: 2026/01/04 18:46:31 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

int	pa(t_stack *a, t_stack *b, int do_print)
{
	if (do_print == 1)
		ft_putendl_fd("pa", 1);
	if (!a || !b)
		return (1);
	if (b->index_top < 0)
		return (1);
	a->index_top += 1;
	a->array[a->index_top] = b->array[b->index_top];
	a->ranks[a->index_top] = b->ranks[b->index_top];
	b->index_top -= 1;
	return (1);
}
