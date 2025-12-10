/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:11:51 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/10 09:05:50 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sb(t_stack *b)
{
	int	temps;

	temps = b->array[b->index_top];
	b->array[b->index_top] = b->array[b->index_top - 1];
	b->array[b->index_top - 1] = temps;
	return (0);
}