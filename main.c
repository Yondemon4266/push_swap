#include "push_swap.h"


static int is_valid_flag(char *flag)
{
    if (ft_strcmp(flag, "--simple") == 0)
        return (1);
    else if (ft_strcmp(flag, "--medium") == 0)
        return (1);
    else if (ft_strcmp(flag, "--complex") == 0)
        return (1);
    else if (ft_strcmp("--adaptive", flag) == 0)
        return (1);
    else
    {
        ft_putendl_fd("Error flag is invalid", 2);
        exit(EXIT_FAILURE);
        return (0);  
    }
}

static int manage_flag(char *flag)
{
    if (ft_strcmp(flag, "--simple") == 0)
        return (1);
    else if (ft_strcmp(flag, "--medium") == 0)
        return (1);
    else if (ft_strcmp(flag, "--complex") == 0)
        return (1);
    else if (ft_strcmp("--adaptive", flag) == 0)
        return (1);
    else
    {
        ft_putendl_fd("Error flag is invalid", 2);
        exit(EXIT_FAILURE);
    }
}

static void verify_input(char **av, int ac)
{
    int i;
    int j;

    i = 0;
    while (i < ac)
    {
        j = 0;
        while (av[i][j])
        {
            if (av[i][j] && (av[i][j] == ' ' || av[i][j] == '\n'
                || av[i][j] == '-' || av[i][j] == '+'
                || (av[i][j] >= '0' && av[i][j] <= '9')))
                j++;
            else
            {
                ft_putendl_fd("Error input incorrect", 2);
                exit(EXIT_FAILURE);
            }
        }
        i++;
    }
}

static int  count_size_str(char **av, int ac)
{
    int i;
    int j;
    int size;

    i = 0;
    size = 0;
    while (i < ac)
    {
        j = 0;
        while (av[i][j])
        {
            size++;
            j++;
        }
        size++;
        i++;
    }
    return (size);
}

static void fill_string(char *joined_str, char **av, int ac)
{
    int i;
    int j;
    int k;

    i = 0;
    k = 0;
    while (i < ac)
    {
        j = 0;
        while (av[i][j])
            joined_str[k++] = av[i][j++];
        joined_str[k++] = ' ';
        i++;
    }
    joined_str[k] = '\0';
}

static int  count_size_tab(char **tab)
{
    int size;

    size = 0;
    while (tab[size] != NULL)
        size++;
    return (size - 1);
}

static char *join_strings(char **av, int ac)
{
    char    *joined_str;
    int size;

    size = count_size_str(av, ac);
    joined_str = (char *) malloc(sizeof(char) * (size + 1));
    if (!joined_str)
    {
        ft_putendl_fd("Error malloc joined_str", 2);
        exit(EXIT_FAILURE);
    }
    fill_string(joined_str, av, ac);
    return(joined_str);
}

static void str_arrayto_int(char **str, t_stack *stack_a)
{
    int i;

    i = 0;
    while (str[i] != NULL)
    {
        stack_a->array[i] = ft_atoi(str[i]);
        i++;
    }
}

static t_stack manage_input(char **av, int ac)
{
    // int size;
    char    *joined_str;
    char    **splitted;
    t_stack stack_a;

    verify_input(av, ac);
    joined_str = join_strings(av, ac);
    splitted = ft_split(joined_str, " ");
    if (!splitted)
    {
        free(joined_str);
        ft_putendl_fd("Error on split", 2);
        exit(EXIT_FAILURE);
    }
    stack_a.index_top = count_size_tab(splitted);
    if (stack_a.index_top + 1 > MAX_SIZE_ARRAY)
    {
        ft_putendl_fd("Error overflow array size", 2);
        exit(EXIT_FAILURE);
    }
    str_arrayto_int(splitted, &stack_a);
    return (stack_a);
}

int main(int ac, char **av)
{
    if (ac >= 2)
    {
        int i;
        int j;
        t_stack stack_a;
        t_stack stack_b;

        i = 1;
        if (ft_strncmp(av[i], "--", 2) == 0 && is_valid_flag(av[i]))
        {
            manage_flag(av[i]);
            i++;
        }
        stack_b.array[0] = 1;
        stack_b.index_top = -1;
        stack_a = manage_input(av + i, ac - i);
        // radix(&stack_a, &stack_b);
        buble(&stack_a);
        j = stack_a.index_top;
        while (j >= 0)
        {
            printf("%d\n", stack_a.array[j]);
            j--;
        }
    }
}