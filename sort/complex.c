#include "../push_swap.h"

int reset_rota(int rotation , t_stack *a)
{
    if (rotation == a->index_top + 1)
        return (0);
    while(rotation > 0)
    {
        ra(a);
		printf("ra\n");
        rotation --;
    }
    return(0);
}

int dispach(t_stack *a, t_stack *b, int i)
{
    int j;
    int top;
    int size;
    int rota;
    
    j = 0;
    rota = 0;
    size = a->index_top + 1;
    while (j < size)
    {
        top = a->array[a->index_top - rota];
        if (!(((top ^ 0x80000000) >> i) & 1))
            rota++;
        else
        {
            rota = reset_rota(rota,a);
			{
            	pb(a, b);
				printf("pb\n");
			}
        }
        j++;
    }
    reset_rota(rota,a);
    while (b->index_top != -1)
	{
		printf("pa\n");
        pa(a, b);
	}
    return (0);
}

int complex(t_stack *a, t_stack *b)
{
    int i;
    int j; 

    i = 0;
    j = 0;
    while (i < 31)
    {
        dispach(a,b,i);
        i++;
    }
    return (0);
}