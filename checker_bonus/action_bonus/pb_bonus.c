/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:13:24 by mbichet           #+#    #+#             */
/*   Updated: 2026/01/04 18:46:39 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

int	pb(t_stack *a, t_stack *b, int do_print)
{
	if (do_print == 1)
		ft_putendl_fd("pb", 1);
	if (!a || !b)
		return (1);
	if (a->index_top < 0)
		return (1);
	b->index_top += 1;
	b->array[b->index_top] = a->array[a->index_top];
	b->ranks[b->index_top] = a->ranks[a->index_top];
	a->index_top -= 1;
	return (1);
}
