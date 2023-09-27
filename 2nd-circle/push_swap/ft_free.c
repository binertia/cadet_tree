/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:27:58 by ksongchu          #+#    #+#             */
/*   Updated: 2023/09/20 23:46:42 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	free_str(char **s, int end_line)
{
	int	line;

	line = 0;
	while (line < end_line)
	{
		free(s[line]);
		line++;
	}
	free(s);
	return (0);
}

int	free_list(t_ls **n)
{
	t_ls	*temp;

	while (*n)
	{
		temp = *n;
		*n = (*n)-> next;
		free(temp);
	}
	n = NULL;
	return (0);
}

int	free_all(t_ls **head, t_ls **other, char **s, int num)
{
	int	temp;

	temp = 0;
	if (head)
	{
		if (*head)
			temp = free_list(head);
	}
	if (other)
	{
		if (*other)
			temp = free_list(other);
	}
	if (s)
	{
		if (*s)
			temp = free_str(s, num);
	}
	return (0);
}
