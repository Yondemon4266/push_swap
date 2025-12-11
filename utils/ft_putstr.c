#include "../push_swap.h"

void ft_putstr(char *str)
{
    int i;

    if (!str)
        return ;
    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}