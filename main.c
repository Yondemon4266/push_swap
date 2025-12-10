#include "push_swap.h"

t_stack fill_stack(char **av, int length)
{
    t_stack stack;
    int i;
    i = 0;
    while (length - i - 1 >= 0)
    {
        stack.array[length - i - 1] = ft_atoi(av[i + 1]);
        // printf("inserting : %d\n", stack.array[length - i - 1]);
        i++;
    }
    stack.index_top = length - 1;
    // printf("index top:%d\n", stack.index_top);
    return (stack);
}

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
        ft_putendl_fd("Error", 2);
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
        ft_putendl_fd("Error", 2);
        exit(EXIT_FAILURE);
    }
}

static int  is_number(char *s)
{
    int i;

    i = 0;
    while (s[i] )
    {
        if ()
    }
}


static void manage_input(char **av, int ac, int offset)
{
    int i;
    char    **arr;
    char    *concat_str;
    i = 0;
    while (i + offset < ac)
    {
         
    }
}

int main(int ac, char **av)
{
    if (ac >= 2)
    {
       int  i;

       i = 1;
       if (ft_strncmp(av[i], "--", 2) == 0 && is_valid_flag(av[i]))
       {
            manage_flag(av[i]);
            i++;
       }
       manage_input(av + i, ac, i);
    }
}