#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"
t_stack create_stack(char **av, int length)
{
    t_stack stack;
    int i;
    i = 0;
    while (length - i - 1 >= 0)
    {
        stack.array[length - i - 1] = atoi(av[i + 1]);
        i++;
    }
    stack.index_top = length - 1;
    return (stack);
}

int main(int ac, char **av)
{
    int i = 0;
    int length = ac -1;
    t_stack stack_a;
    t_stack stack_b;
    stack_a = create_stack(av, length);
    stack_b.array[0] = 1;
    stack_b.index_top = 0;
    insertion(&stack_a);
    while (stack_a.index_top >= 0)
    {
        printf("%d\n", stack_a.array[stack_a.index_top]);
        stack_a.index_top--;
    }
        while (stack_b.index_top >= 0)
    {
        printf("stack b:%d\n", stack_b.array[stack_b.index_top]);
        stack_b.index_top--;
    }
}