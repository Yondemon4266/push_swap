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

static char    *read_instructions(void)
{
    char    *line;
    char    buffer[1];
    int     i;
    int     read_bytes;

    line = malloc(4);
    if (!line)
        return (NULL);
    i = 0;
    while ((read_bytes = read(0, buffer, 1)) > 0)
    {
        if (i == 4)
            break ;
        line[i] = buffer[0];
        if (buffer[0] == '\n')
            break ;
        i++;
    }
    line[i] = '\0';
    return (line);
}

static int  is_valid_line(char *line)
{
    if (ft_strcmp(line, "pa") == 0)
        return (1);
    else if (ft_strcmp(line, "pb") == 0)
        return (1);
    else if (ft_strcmp(line, "ra") == 0)
        return (1);
    else if (ft_strcmp(line, "rb") == 0)
        return (1);
    else if (ft_strcmp(line, "rr") == 0)
        return (1);
    else if (ft_strcmp(line, "rra") == 0)
        return (1);
    else if (ft_strcmp(line, "rrb") == 0)
        return (1);
    else if (ft_strcmp(line, "rrr") == 0)
        return (1);
    else if (ft_strcmp(line, "sa") == 0)
        return (1);
    else if (ft_strcmp(line, "sb") == 0)
        return (1);
    else if (ft_strcmp(line, "ss") == 0)
        return (1);
    return (0);
}

static void    choose_instruction(char *line, t_stack *a, t_stack *b)
{
    if (ft_strcmp(line, "pa") == 0)
        pa(a, b);
    else if (ft_strcmp(line, "pb") == 0)
        pb(a, b);
    else if (ft_strcmp(line, "ra") == 0)
        ra(a);
    else if (ft_strcmp(line, "rb") == 0)
        rb(b);
    else if (ft_strcmp(line, "rr") == 0)
        rr(a, b);
    else if (ft_strcmp(line, "rra") == 0)
        rra(a);
    else if (ft_strcmp(line, "rrb") == 0)
        rrb(b);
    else if (ft_strcmp(line, "rrr") == 0)
        rrr(a, b);
    else if (ft_strcmp(line, "sa") == 0)
        sa(a);
    else if (ft_strcmp(line, "sb") == 0)
        sb(b);
    else if (ft_strcmp(line, "ss") == 0)
        ss(a, b);
}

int main(int ac, char **av)
{
    t_stack			stack_a;
	t_stack			stack_b;
    char            *line;

    if (ac >= 2)
    {
        stack_a = manage_input(av + 1, ac - 1);
	    stack_b = init_empty_stack(stack_a.index_top + 1, &stack_a);
        while ((line = read_instructions()) > 0)
        {
            if (!is_valid_line(line))
                error_line_exit(line, &stack_a, &stack_b);
            if (line[0] == '\0')

            choose_instruction(line, &stack_a, &stack_b);
        }
    }
}