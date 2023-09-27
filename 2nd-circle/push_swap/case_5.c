/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:57:32 by ksongchu          #+#    #+#             */
/*   Updated: 2023/09/20 23:07:21 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lower_pivot(t_ls *head, int pivot)
{
	int	i;

	i = 0;
	while (head)
	{
		if (head->index <= pivot)
			i++;
		head = head->next;
	}
	return (i);
}

void	ccase_3_extend_else(t_ls **a_head, t_ls **b_head)
{
	if ((*a_head)->index < (*a_head)->next->next->index)
	{
		if (!((*a_head)->next->index < (*a_head)->next->next->index))
		{
			ft_mainout(a_head, b_head, 1, ft_swap);
			ft_single_out(a_head, 'a', ft_rev);
		}
		else if ((*b_head)->index > (*b_head)->next->index)
			ft_single_out(b_head, 'b', ft_swap);
	}
	else
		ft_mainout(a_head, b_head, 1, ft_rrev);
}

void	ccase_3(t_ls **a_head, t_ls **b_head)
{
	if ((*a_head)->index > (*a_head)->next->index)
	{
		if ((*a_head)->index > (*a_head)->next->next->index)
		{
			if ((*a_head)->next->index < (*a_head)->next->next->index)
			{
				ft_mainout(a_head, b_head, 1, ft_rev);
			}
			else
			{
				ft_mainout(a_head, b_head, 1, ft_swap);
				ft_single_out(a_head, 'a', ft_rrev);
			}
		}
		else
			ft_mainout(a_head, b_head, 1, ft_swap);
	}
	else
		ccase_3_extend_else(a_head, b_head);
	while (*b_head)
	{
		ft_push(b_head, a_head, 'a');
		ft_single_out(a_head, 'a', ft_rev);
	}
}

void	p_back(t_ls **b_head, t_ls **a_head)
{
	while (*b_head)
		ft_push(b_head, a_head, 'a');
}

void	case_five(t_ls **a_head)
{
	t_ls	*b_head;
	int		low_pivot;
	int		pivot;

	b_head = NULL;
	pivot = small_select(*a_head);
	ft_push(a_head, &b_head, 'b');
	ft_push(a_head, &b_head, 'b');
	low_pivot = lower_pivot(*a_head, pivot);
	if (low_pivot == 1)
	{
		if (eq_pivot(*a_head, pivot))
			ccase_1_piv(a_head, &b_head);
		else
			ccase_1(a_head, &b_head);
	}
	else if (low_pivot == 2)
		ccase_2(a_head, &b_head);
	else
		ccase_3(a_head, &b_head);
}
