/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 12:41:21 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/09 13:59:10 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pa(t_stack *a, t_stack *b)
{
	if (b->previous == 0 || a == NULL || b == NULL)
		return (0);
	b = go_back(b);
	a = add_back(a,b);
	delete_element(b);
}