/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ccase_two.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:17:16 by ksongchu          #+#    #+#             */
/*   Updated: 2023/09/23 17:10:22 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ccase_2_push(t_ls **a, t_ls **b)
{
	ft_push(b, a, 'a');
	if ((*a)->index > (*a)->next->index)
		ft_single_out(a, 'a', ft_swap);
	if ((*b)->index == 3)
	{
		ft_push(b, a, 'a');
		ft_single_out(a, 'a', ft_rrev);
		ft_single_out(a, 'a', ft_rrev);
	}
	else if ((*b)->index == 2)
	{
		ft_single_out(a, 'a', ft_rrev);
		ft_push(b, a, 'a');
		ft_single_out(a, 'a', ft_rrev);
	}
	else if ((*b)->index == 1)
	{
		ft_single_out(a, 'a', ft_rrev);
		ft_single_out(a, 'a', ft_rrev);
		ft_push(b, a, 'a');
	}
}

void	ccase_2_if(t_ls **a, t_ls **b)
{
	if ((*a)->index < (*a)->next->next->index)
	{
		if ((*a)->next->index < (*a)->next->next->index)
			ft_mainout(a, b, 0, ft_rrev);
		else
			ft_mainout(a, b, 0, ft_swap);
	}
	else
		ft_mainout(a, b, 0, ft_rev);
}

void	ccase_2(t_ls **a, t_ls **b)
{
	if ((*a)->index < (*a)->next->index)
		ccase_2_if(a, b);
	else
	{
		if ((*a)->index > (*a)->next->next->index)
		{
			if ((*a)->next->index > (*a)->next->next->index)
			{
				ft_mainout(a, b, 0, ft_rrev);
				ft_single_out(a, 'a', ft_swap);
			}
			else
			{
				if ((*b)->index < (*b)->next->index)
					ft_single_out(b, 'b', ft_swap);
			}
		}
		else
		{
			ft_mainout(a, b, 0, ft_swap);
			ft_single_out(a, 'a', ft_rrev);
		}
	}
	ccase_2_push(a, b);
}
