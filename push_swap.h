/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbichet <mbichet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 10:11:29 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/11 14:36:04 by mbichet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>

#define MAX_SIZE_ARAY 50000

typedef struct s_stack
{
	int	index_top;
	int	array[MAX_SIZE_ARAY];

}	t_stack;

int	pa(t_stack *a, t_stack *b);
int	pb(t_stack *a, t_stack *b);
int	ra(t_stack *a);
int	rb(t_stack *b);
int rr(t_stack *a, t_stack *b);
int	rra(t_stack *a);
int	rrb(t_stack *b);
int	sa(t_stack *a);
int	sb(t_stack *b);
int	ss(t_stack *a, t_stack *b);

int	buble(t_stack *a);
int	medium(t_stack *a, t_stack *b);
int radix(t_stack *a, t_stack *b);

#endif
