/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 10:35:07 by aluslu            #+#    #+#             */
/*   Updated: 2025/12/17 14:11:26 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int ft_abs(int nb)
{
    if (nb == INT_MIN)
        return (INT_MAX);
    if (nb > 0)
        return (nb);
    return (-nb);
}


static int get_min_max(int *nb_bucket, int *max,int *min, t_stack *a)
{
    int i;
    int sum;
    //int *max = NULL;

    i = 0;
    *min = a->array[0];
    *max = a->array[0];
    while(i <= a->index_top)
    {
        if (*max < a->array[i])
            *max = a->array[i];
        if (*min > a->array[i])
            *min = a->array[i];
        i++;
    }
    *nb_bucket = ((a->index_top + 1) / 3) + (((a->index_top + 1) % 3) != 0);
    sum = ((ft_abs(*min) + ft_abs(*max)) / *nb_bucket) + (((ft_abs(*min) + ft_abs(*max)) % *nb_bucket) != 0);
    return (sum);
}
static int sort_b(t_stack *b)
{
    int i;
    int j;
    int n;

    i = 0;
    n = b->index_top;
    while (i <= n)
    {
        j = 0;
        while (j <= n)
        {
            if (j < n - i && b->array[n] < b->array[n - 1])
                sb(b);
            rb(b);
            j++;
        }
        i++;
    }
    return (0);
}

static int dispach_medium(t_stack *a, t_stack *b,int max ,int sum, t_bench_infos *infos)
{
    int top;
    int i;
    
    top = a->index_top;
    i = 0;
    
    while(i <= top)
    {
        if (max >= a->array[a->index_top] && max - sum <= a->array[a->index_top])
            infos->pb_count += pb(a,b);
        else
            infos->ra_count += ra(a);
        i++;
    }
    sort_b(b);
    while (b->index_top != -1)
        infos->pa_count += pa(a,b);
    return (0);
}


int    medium(t_stack *a, t_stack *b, t_bench_infos *infos)
{
    int nb_bucket;
    int max;
    int min;
    int sum;
    int j;
    j = 1;
    sum = get_min_max(&nb_bucket,&max,&min,a);
    while(j <= nb_bucket)
    {
        dispach_medium(a,b,max,sum, infos);
        max -= sum;
        j++;
    }
    return (0);
}