/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 10:11:29 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/09 15:34:28 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#define MAX_SIZE_ARAY 100

typedef struct s_stack
{
	int	index_top;
	int	array[MAX_SIZE_ARAY];

}	t_stack;

int	pa(t_stack *a, t_stack *b);
void swap_a(t_stack *a);
int	rra(t_stack *a);
int	rrb(t_stack *b);
int	pb(t_stack *a, t_stack *b);
int	ra(t_stack *a);
int	rb(t_stack *b);

#endif
