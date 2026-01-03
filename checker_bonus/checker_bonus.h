/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:32:51 by aluslu            #+#    #+#             */
/*   Updated: 2026/01/03 18:41:46 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	int				index_top;
	int				*array;
	int				*ranks;
}					t_stack;

/* FONCTIONS D'INSTRUCTIONS */

int					pa(t_stack *a, t_stack *b);
int					pb(t_stack *a, t_stack *b);
int					ra(t_stack *a);
int					rb(t_stack *b);
int					rr(t_stack *a, t_stack *b);
int					rra(t_stack *a);
int					rrb(t_stack *b);
int					rrr(t_stack *a, t_stack *b);
int					sa(t_stack *a);
int					sb(t_stack *b);
int					ss(t_stack *a, t_stack *b);

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
void                error_line_exit(char *line, t_stack *a, t_stack *b);

#endif