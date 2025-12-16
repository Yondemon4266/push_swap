/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:11:51 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/16 18:35:11 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sb(t_stack *b)
{
	if (!b || b->index_top <= 0)
		return (0);
	swap(&b->array[b->index_top], &b->array[b->index_top - 1]);
	swap(&b->ranks[b->index_top], &b->ranks[b->index_top - 1]);
	return (1);
}