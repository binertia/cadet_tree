/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lowlen_case.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:47:30 by ksongchu          #+#    #+#             */
/*   Updated: 2023/09/21 00:53:08 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_two(t_ls **head)
{
	if ((*head)->index > (*head)->next->index)
		ft_single_out(head, 'a', ft_swap);
}

void	case_three(t_ls **head)
{
	if ((*head)->index > (*head)->next->index)
	{
		if ((*head)->index > (*head)->next->next->index)
		{
			if ((*head)->next->index < (*head)->next->next->index)
			{
				ft_single_out(head, 'a', ft_rev);
				return ;
			}
			ft_single_out(head, 'a', ft_swap);
			ft_single_out(head, 'a', ft_rrev);
		}
		else
			ft_single_out(head, 'a', ft_swap);
	}
	else
	{
		if ((*head)->index > (*head)->next->next->index)
			ft_single_out(head, 'a', ft_rrev);
		else
		{
			ft_single_out(head, 'a', ft_swap);
			ft_single_out(head, 'a', ft_rev);
		}
	}
}

int	lowlen_case(t_ls **head, int nth_case)
{
	if (nth_case == 2)
		case_two(head);
	else if (nth_case == 3)
		case_three(head);
	else if (nth_case == 4)
		case_four(head);
	else if (nth_case == 5)
		case_five(head);
	free_list(head);
	return (0);
}
/*
	//
	t_ls *god = *head;
	while (god)
	{
		write(1, ft_itoa(god -> index),9);
		write(1, "((()))\n", 7);
		god= god -> next;
	}
	write(1, "lst pass\n",9);
	//
	// */
