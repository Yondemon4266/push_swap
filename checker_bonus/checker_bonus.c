#include "checker_bonus.h"

static t_stack	init_empty_stack(int size, t_stack *a)
{
	t_stack	stack;

	stack.array = (int *)malloc(sizeof(int) * size);
	if (!stack.array)
	{
		free(a->array);
		free(a->ranks);
		ft_putendl_fd("Error", 2);
		exit(EXIT_FAILURE);
	}
	stack.ranks = (int *)malloc(sizeof(int) * size);
	if (!stack.ranks)
	{
		free(stack.array);
		free(a->array);
		free(a->ranks);
		ft_putendl_fd("Error", 2);
		exit(EXIT_FAILURE);
	}
	stack.index_top = -1;
	return (stack);
}

static int	is_valid_line(char *line)
{
	if (ft_strcmp(line, "pa\n") == 0)
		return (1);
	else if (ft_strcmp(line, "pb\n") == 0)
		return (1);
	else if (ft_strcmp(line, "ra\n") == 0)
		return (1);
	else if (ft_strcmp(line, "rb\n") == 0)
		return (1);
	else if (ft_strcmp(line, "rr\n") == 0)
		return (1);
	else if (ft_strcmp(line, "rra\n") == 0)
		return (1);
	else if (ft_strcmp(line, "rrb\n") == 0)
		return (1);
	else if (ft_strcmp(line, "rrr\n") == 0)
		return (1);
	else if (ft_strcmp(line, "sa\n") == 0)
		return (1);
	else if (ft_strcmp(line, "sb\n") == 0)
		return (1);
	else if (ft_strcmp(line, "ss\n") == 0)
		return (1);
	return (0);
}

static void	choose_instruction(char *line, t_stack *a, t_stack *b)
{

	if (ft_strcmp(line, "pa\n") == 0)
		pa(a, b, 0);
	else if (ft_strcmp(line, "pb\n") == 0)
		pb(a, b, 0);
	else if (ft_strcmp(line, "ra\n") == 0)
		ra(a, 0);
	else if (ft_strcmp(line, "rb\n") == 0)
		rb(b, 0);
	else if (ft_strcmp(line, "rr\n") == 0)
		rr(a, b, 0);
	else if (ft_strcmp(line, "rra\n") == 0)
		rra(a, 0);
	else if (ft_strcmp(line, "rrb\n") == 0)
		rrb(b, 0);
	else if (ft_strcmp(line, "rrr\n") == 0)
		rrr(a, b, 0);
	else if (ft_strcmp(line, "sa\n") == 0)
		sa(a, 0);
	else if (ft_strcmp(line, "sb\n") == 0)
		sb(b, 0);
	else if (ft_strcmp(line, "ss\n") == 0)
		ss(a, b, 0);
}


static void	run_checker(t_stack *a, t_stack *b)
{
	char	*line;

	while ((line = get_next_line(0)) != NULL)
	{
		if (!is_valid_line(line))
		{
			free(line);
			free_stack(a, b);
			ft_putendl_fd("Error", 2);
			exit(EXIT_FAILURE);
		}
		else
			choose_instruction(line, a, b);
		free(line);
	}
}

int	main(int ac, char **av)
{
	t_stack stack_a;
	t_stack stack_b;

	if (ac == 1)
		return (0);
	stack_a = manage_input(av + 1, ac - 1);
	stack_b = init_empty_stack(stack_a.index_top + 1, &stack_a);
	run_checker(&stack_a, &stack_b);
	if (is_stack_sorted(&stack_a) && stack_b.index_top == -1)
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
	free_stack(&stack_a, &stack_b);
	return (0);
}