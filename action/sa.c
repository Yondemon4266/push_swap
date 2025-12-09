/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:05:15 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/09 16:11:48 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sa(t_stack *a)
{
	int	temps;

	temps = a->array[a->index_top];
	a->array[a->index_top] = a->array[a->index_top - 1];
	a->array[a->index_top - 1] = temps;
	return (0);
}