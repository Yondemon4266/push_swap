/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 12:41:21 by mbichet           #+#    #+#             */
/*   Updated: 2026/01/03 18:47:08 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

int	pa(t_stack *a, t_stack *b)
{
	a->index_top += 1;
	a->array[a->index_top] = b->array[b->index_top];
	a->ranks[a->index_top] = b->ranks[b->index_top];
	b->index_top -= 1;
	return (1);
}
