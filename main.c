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


int main(int ac, char **av)
{
    if (ac >= 2)
    {
        char **arr;
        int length = ac -1;
        t_stack stack_a;
        t_stack stack_b;
        
        arr = ft_split(av[1], ' ');
        stack_a = fill_stack(av, length);
        stack_b.index_top = -1;
        
                // while (stack_a.index_top >= 0)
        // {
        //     printf("stack a:%d\n", stack_a.array[stack_a.index_top]);
        //     stack_a.index_top--;
        // }
        //     while (stack_b.index_top >= 0)
        // {
        //     printf("stack b:%d\n", stack_b.array[stack_b.index_top]);
        //     stack_b.index_top--;
        // }
    }
}