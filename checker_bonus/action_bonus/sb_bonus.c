/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:11:51 by mbichet           #+#    #+#             */
/*   Updated: 2026/01/04 18:46:54 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

int	sb(t_stack *b, int do_print)
{
	if (do_print == 1)
		ft_putendl_fd("sb", 1);
	if (!b || b->index_top <= 0)
		return (1);
	swap(&b->array[b->index_top], &b->array[b->index_top - 1]);
	swap(&b->ranks[b->index_top], &b->ranks[b->index_top - 1]);
	return (1);
}
