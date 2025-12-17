/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_bench.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluslu <aluslu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 10:57:10 by aluslu            #+#    #+#             */
/*   Updated: 2025/12/17 19:59:24 by aluslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	display_bench(t_bench_infos infos)
{
	char str_strategy[256];

	infos.total_ops = infos.sa_count + infos.sb_count + infos.ss_count
		+ infos.pa_count + infos.pb_count + infos.ra_count + infos.rb_count
		+ infos.rr_count + infos.rra_count + infos.rrb_count + infos.rrr_count;
	if (infos.strategy == SIMPLE)
		ft_strcpy(str_strategy, "Simple / O(n²)");
	else if (infos.strategy == MEDIUM)
		ft_strcpy(str_strategy, "Medium / O(n\u221an)");
	else if (infos.strategy == COMPLEX)
		ft_strcpy(str_strategy, "Complex / O(nlogn)");
	else if (infos.strategy == ADAPTIVE && infos.disorder < 0.20)
		ft_strcpy(str_strategy, "Adaptive / O(n²)");
	else if (infos.strategy == ADAPTIVE && (infos.disorder >= 0.20
			&& infos.disorder < 0.50))
		ft_strcpy(str_strategy, "Adaptive / O(n\u221an)");
	else if (infos.strategy == ADAPTIVE && (infos.disorder >= 0.50))
		ft_strcpy(str_strategy, "Adaptive / O(nlogn)");
	ft_printf("[bench] disorder: %d%\n[bench] strategy: %s\n[bench] total ops: %d\n[bench] sa: %d sb: %d ss: %d pa: %d pb: %d\n[bench] ra: %d rb: %d rr: %d rra: %d rrb: %d rrr: %d\n", (int)(infos.disorder * 100),
		str_strategy, infos.total_ops, infos.sa_count, infos.sb_count,
		infos.ss_count, infos.pa_count, infos.pb_count, infos.ra_count,
		infos.rb_count, infos.rr_count, infos.rra_count, infos.rrb_count,
		infos.rrr_count);
	return ;
}