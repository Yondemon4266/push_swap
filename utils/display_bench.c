/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_bench.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 10:57:10 by aluslu            #+#    #+#             */
/*   Updated: 2025/12/18 09:45:20 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	total_ops_calculation(t_bench_infos *infos)
{
	infos->total_ops = infos->sa_count + infos->sb_count + infos->ss_count;
	infos->total_ops += infos->pa_count + infos->pb_count + infos->ra_count;
	infos->total_ops += infos->rb_count + infos->rr_count + infos->rra_count;
	infos->total_ops += infos->rrb_count + infos->rrr_count;
}

void	display_bench(t_bench_infos *infos)
{
	char	str_strategy[256];

	if (infos->strategy == SIMPLE)
		ft_strcpy(str_strategy, "Simple / O(n²)");
	else if (infos->strategy == MEDIUM)
		ft_strcpy(str_strategy, "Medium / O(n√n)");
	else if (infos->strategy == COMPLEX)
		ft_strcpy(str_strategy, "Complex / O(nlogn)");
	else if (infos->strategy == ADAPTIVE && infos->disorder < 0.20)
		ft_strcpy(str_strategy, "Adaptive / O(n²)");
	else if (infos->strategy == ADAPTIVE && (infos->disorder >= 0.20
			&& infos->disorder < 0.50))
		ft_strcpy(str_strategy, "Adaptive / O(n√n)");
	else if (infos->strategy == ADAPTIVE && (infos->disorder >= 0.50))
		ft_strcpy(str_strategy, "Adaptive / O(nlogn)");
	ft_printf("[bench] disorder: %d%%\n", (int)(infos->disorder * 100));
	ft_printf("[bench] total ops: %d\n", infos->total_ops);
	ft_printf("[bench] sa: %d sb: %d ", infos->sa_count, infos->sb_count);
	ft_printf("ss: %d pa: %d ", infos->ss_count, infos->pa_count);
	ft_printf("pb: %d\n[bench] ra: %d ", infos->pb_count, infos->ra_count);
	ft_printf("rb: %d rr: %d ", infos->rb_count, infos->rr_count);
	ft_printf("rra: %d rrb: %d ", infos->rra_count, infos->rrb_count);
	ft_printf("rrr: %d\n", infos->rrr_count);
}
