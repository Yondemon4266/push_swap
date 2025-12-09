#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"
t_stack create_stack(char **av, int length)
{
    t_stack stack;
    int i;
    i = 0;
    while (i < length)
    {
        stack.array[i] = atoi(av[i + 1]);
        i++;
    }
    stack.index_top = length - 1;
    return (stack);
}

int main(int ac, char **av)
{
    if (ac >= 2)
    {
        int i = 0;
        int length = ac - 1;
        t_stack stack_a;
        t_stack stack_b;
        stack_a = create_stack(av, length);
        stack_b.index_top = -1;
        rb(&stack_a);
        // while (i < ac -1)
        // {
        //     printf("%d\n", stack_a.array[i]);
        //     i++;
        // }
    }
}