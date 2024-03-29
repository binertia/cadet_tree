/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lowlen_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:45:23 by ksongchu          #+#    #+#             */
/*   Updated: 2023/09/20 22:08:39 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	eq_pivot(t_ls *head, int pivot)
{
	while (head)
	{
		if (head->index == pivot)
			return (1);
		head = head->next;
	}
	return (0);
}

int	small_select(t_ls *head)
{
	t_ls	*temp;
	t_ls	*pivot;
	int		count;

	count = 0;
	temp = head;
	pivot = head;
	while (pivot)
	{
		while (temp)
		{
			if (temp -> index < pivot -> index)
				count++;
			temp = temp -> next;
		}
		if (count == 2)
			return (pivot -> index);
		count = 0;
		temp = head;
		pivot = pivot -> next;
	}
	return (0);
}
