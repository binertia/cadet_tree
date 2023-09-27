/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:24:53 by ksongchu          #+#    #+#             */
/*   Updated: 2023/09/21 18:58:37 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_dup(t_ls *n)
{
	t_ls	*temp;

	if (!n)
		return (0);
	while (n -> next)
	{
		temp = n -> next;
		while (temp)
		{
			if (n -> value == temp -> value)
				return (0);
			temp = temp -> next;
		}
		n = n -> next;
	}
	return (1);
}
