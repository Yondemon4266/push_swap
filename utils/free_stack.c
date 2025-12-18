/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:40:34 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/18 11:51:33 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	free_stack(t_stack *a_stack, t_stack *b_stack)
{
	free(a_stack->array);
	free(a_stack->ranks);
	free(b_stack->array);
	free(b_stack->ranks);
	return (1);
}
