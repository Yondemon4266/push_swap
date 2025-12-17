/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:13:24 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/17 19:53:39 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	pb(t_stack *a, t_stack *b)
{
	b->index_top += 1;
	b->array[b->index_top] = a->array[a->index_top];
	b->ranks[b->index_top] = a->ranks[a->index_top];
	a->index_top -= 1;
	ft_putendl_fd("pb", 1);
	return (1);
}
