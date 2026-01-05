/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 10:11:29 by mbichet           #+#    #+#             */
/*   Updated: 2026/01/04 15:38:20 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				index_top;
	int				*array;
	int				*ranks;
}					t_stack;

enum				e_strategy
{
	SIMPLE,
	MEDIUM,
	COMPLEX,
	ADAPTIVE
};

typedef struct s_bench_infos
{
	float			disorder;
	enum e_strategy	strategy;
	int				bench;
	int				total_ops;
	int				sa_count;
	int				sb_count;
	int				ss_count;
	int				pa_count;
	int				pb_count;
	int				ra_count;
	int				rb_count;
	int				rr_count;
	int				rra_count;
	int				rrb_count;
	int				rrr_count;
}					t_bench_infos;

/* FONCTIONS D'INSTRUCTIONS */

int					pa(t_stack *a, t_stack *b, int do_print);
int					pb(t_stack *a, t_stack *b, int do_print);
int					ra(t_stack *a, int do_print);
int					rb(t_stack *b, int do_print);
int					rr(t_stack *a, t_stack *b, int do_print);
int					rra(t_stack *a, int do_print);
int					rrb(t_stack *b, int do_print);
int					rrr(t_stack *a, t_stack *b, int do_print);
int					sa(t_stack *a, int do_print);
int					sb(t_stack *b, int do_print);
int					ss(t_stack *a, t_stack *b, int do_print);

/* FONCTIONS D'ALGORITHME */

void				simple(t_stack *a, t_bench_infos *infos);
void				medium(t_stack *a, t_stack *b, t_bench_infos *infos);
void				complex(t_stack *a, t_stack *b, t_bench_infos *infos);

/* PARSING && PARSING UTILS */

t_stack				manage_input(char **av, int ac);
char				*join_strings(char **av, int ac);
int					count_size_str(char **av, int ac);
int					get_top_index(char **tab);
void				fill_string(char *joined_str, char **av, int ac);
void				str_arrayto_int(char **str, t_stack *stack_a);
int					ft_plus_or_minus(char c);
int					ft_isspace(char c);
void				free_str_array(char **str);
void				swap(int *a, int *b);
char				*ft_strcpy(char *dest, const char *src);
void				exit_str_to_int(t_stack *a, char **str);
int					free_stack(t_stack *a_stack, t_stack *b_stack);

/* FT_PRINTF */

int					ft_printf(const char *str, ...);
int					ft_putcharl(int c);
int					ft_putstrl(char *s);
int					ft_putnbrl(int nb);
int					ft_unsigned_putnbrl(unsigned int nb);
int					ft_putnbrl_hexa(uintptr_t nb, char c);
int					ft_print_pointer(void *ptr);
char				*ft_strcpy(char *dest, const char *src);

/* MANAGING FLAGS FUNCTIONS */

int					is_valid_flag(char *flag);
void				manage_flag(char *flag, enum e_strategy *strategy,
						int *bench);

/* DISPLAY INFOS */

void				display_bench(t_bench_infos *infos);

#endif
