/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 10:11:29 by mbichet           #+#    #+#             */
/*   Updated: 2025/12/12 19:03:58 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "libft/libft.h"

#define MAX_SIZE_ARRAY 50000

typedef struct s_stack
{
	int	index_top;
	int	array[MAX_SIZE_ARRAY];

}	t_stack;

enum e_strategy {
	SIMPLE,
	MEDIUM,
	COMPLEX,
	ADAPTIVE	
};

/* FONCTIONS D'INSTRUCTIONS */

int		pa(t_stack *a, t_stack *b);
int		pb(t_stack *a, t_stack *b);
int		ra(t_stack *a);
int		rb(t_stack *b);
int		rr(t_stack *a, t_stack *b);
int		rra(t_stack *a);
int		rrb(t_stack *b);
int		rrr(t_stack *a, t_stack *b);
int		sa(t_stack *a);
int		sb(t_stack *b);
int		ss(t_stack *a, t_stack *b);
int		buble(t_stack *a);
void	swap(int *a, int *b);

/* FONCTIONS D'ALGORITHME */

int	buble(t_stack *a);
int	medium(t_stack *a, t_stack *b);
int radix(t_stack *a, t_stack *b);

/* PARSING && PARSING UTILS */

t_stack	manage_input(char **av, int ac);
char	*join_strings(char **av, int ac);
int	count_size_str(char **av, int ac);
int	get_top_index(char **tab);
void	fill_string(char *joined_str, char **av, int ac);
void	verify_input(char **av, int ac);
void	str_arrayto_int(char **str, t_stack *stack_a);
int ft_plus_or_minus(char c);
int	ft_isspace(char c);

/* MANAGING FLAGS FUNCTIONS */

int	is_valid_flag(char *flag);
void	manage_flag(char *flag, enum e_strategy *strategy, int *bench);

#endif
