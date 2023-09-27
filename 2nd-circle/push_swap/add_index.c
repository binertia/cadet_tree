/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:55:07 by ksongchu          #+#    #+#             */
/*   Updated: 2023/09/20 21:56:00 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index(t_ls *n, int num)
{
	int	i;

	i = 1;
	while (n)
	{
		if (n -> value < num)
			i++;
		n = n -> next;
	}
	return (i);
}

void	add_index(t_ls *n)
{
	t_ls	*temp;
	int		num;

	temp = n;
	while (temp)
	{
		num = temp -> value;
		num = get_index(n, num);
		temp -> index = num;
		temp = temp -> next;
	}
}
