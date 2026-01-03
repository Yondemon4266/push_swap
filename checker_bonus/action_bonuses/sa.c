/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:05:15 by mbichet           #+#    #+#             */
/*   Updated: 2026/01/03 18:47:23 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

int	sa(t_stack *a)
{
	if (!a || a->index_top <= 0)
		return (1);
	swap(&a->array[a->index_top], &a->array[a->index_top - 1]);
	swap(&a->ranks[a->index_top], &a->ranks[a->index_top - 1]);
	return (1);
}
