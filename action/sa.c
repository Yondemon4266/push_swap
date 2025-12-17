/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:05:15 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/17 10:39:16 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sa(t_stack *a)
{
	ft_putendl_fd("sa", 1);
	if (!a || a->index_top <= 0)
		return (0);
	swap(&a->array[a->index_top], &a->array[a->index_top - 1]);
	swap(&a->ranks[a->index_top], &a->ranks[a->index_top - 1]);
	return (1);
}