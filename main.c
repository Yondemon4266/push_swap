#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"
t_stack create_stack(char **av, int arg_count)
{
    t_stack stack;
    int i;
    i = 0;
    while (i < arg_count)
    {
        stack.array[i] = atoi(av[i + 1]);
        i++;
    }
    return (stack);
}

int main(int ac, char **av)
{
    if (ac >= 2)
    {
        int i = 0;
        t_stack stack_a;
        stack_a = create_stack(av, ac - 1);
        while (i < ac - 1)
        {
            printf("%d\n", stack_a.array[i]);
            i++;
        }
    }
}