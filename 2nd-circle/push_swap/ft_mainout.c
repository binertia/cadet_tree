/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mainout.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:40:37 by ksongchu          #+#    #+#             */
/*   Updated: 2023/09/21 00:52:56 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap_decre(t_ls **head)
{
	if ((*head)->value < (*head)->next->value)
	{
		ft_swap(head);
		return (1);
	}
	return (0);
}

int	swap_incre(t_ls **head)
{
	if ((*head)->value > (*head)->next->value)
	{
		ft_swap(head);
		return (1);
	}
	return (0);
}

int	b_swap(t_ls **head, int incre)
{
	if (incre)
		return (swap_incre(head));
	else
		return (swap_decre(head));
}

void	ft_mainout(t_ls **a_l, t_ls **b_l, int num, void (*fn)(t_ls **))
{
	void	(*swap)(t_ls **);
	void	(*rev)(t_ls **);
	void	(*rrev)(t_ls **);
	int		is_swap;

	swap = ft_swap;
	rev = ft_rev;
	rrev = ft_rrev;
	fn(a_l);
	is_swap = b_swap(b_l, num);
	if (fn == swap)
		write(1, "s", 1);
	else if (fn == rev)
		write(1, "r", 1);
	else if (fn == rrev)
		write(1, "rr", 2);
	if (is_swap)
	{
		if (fn == swap)
			write(1, "s\n", 2);
		else
			write(1, "r\n", 2);
	}
	else
		write(1, "a\n", 2);
}
