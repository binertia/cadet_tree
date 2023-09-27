/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ccase_one.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:15:50 by ksongchu          #+#    #+#             */
/*   Updated: 2023/09/20 22:06:07 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ccase_1_push(t_ls **a_head, t_ls **b_head)
{
	int		i;
	t_ls	*a_tail;

	i = 1;
	a_tail = ft_lstlast(*a_head);
	ft_push(b_head, a_head, 'a');
	if (a_tail->index < (*b_head)->index)
	{
		ft_push(b_head, a_head, 'a');
		i--;
	}
	if (i)
		ft_single_out(a_head, 'a', ft_rrev);
	p_back(b_head, a_head);
	if (a_tail->index < (*a_head)->index)
		ft_single_out(a_head, 'a', ft_rrev);
}

static void	ccase_1_if(t_ls **a_head, t_ls **b_head)
{
	if ((*a_head)->next->index < (*a_head)->next->next->index)
		ft_mainout(a_head, b_head, 0, ft_rev);
	else if ((*a_head)->index > (*a_head)->next->next->index)
	{
		if ((*b_head)->index < (*b_head)->next->index)
			ft_single_out(b_head, 'b', ft_rev);
	}
	else
	{
		ft_mainout(a_head, b_head, 0, ft_rev);
		ft_single_out(a_head, 'a', ft_swap);
	}
}

void	ccase_1(t_ls **a_head, t_ls **b_head)
{
	if ((*a_head)->index < (*a_head)->next->index)
		ccase_1_if(a_head, b_head);
	else
	{
		if ((*a_head)->next->index > (*a_head)->next->next->index)
			ft_mainout(a_head, b_head, 0, ft_swap);
		else
		{
			if ((*a_head)->index > (*a_head)->next->next->index)
				ft_mainout(a_head, b_head, 0, ft_rrev);
			else
			{
				ft_mainout(a_head, b_head, 0, ft_swap);
				ft_single_out(a_head, 'a', ft_rev);
			}
		}
	}
	ccase_1_push(a_head, b_head);
}

void	ccase_1_piv_if(t_ls **a_head, t_ls **b_head)
{
	if ((*a_head)->index < (*a_head)->next->next->index)
	{
		if ((*a_head)->next->index < (*a_head)->next->next->index)
		{
			if ((*b_head)->index < (*b_head)->next->index)
				ft_single_out(b_head, 'b', ft_swap);
		}
		else
		{
			ft_mainout(a_head, b_head, 0, ft_swap);
			ft_single_out(a_head, 'a', ft_rev);
		}
	}
	else
		ft_mainout(a_head, b_head, 0, ft_rrev);
}

void	ccase_1_piv(t_ls **a_head, t_ls **b_head)
{
	if ((*a_head)->index < (*a_head)->next->index)
		ccase_1_piv_if(a_head, b_head);
	else
	{
		if ((*a_head)->next->index > (*a_head)->next->next->index)
		{
			ft_mainout(a_head, b_head, 0, ft_swap);
			ft_single_out(a_head, 'a', ft_rrev);
		}
		else
		{
			if ((*a_head)->index > (*a_head)->next->next->index)
				ft_mainout(a_head, b_head, 0, ft_rev);
			else
				ft_mainout(a_head, b_head, 0, ft_swap);
		}
	}
	p_back(b_head, a_head);
}
