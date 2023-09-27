/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_chr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:23:05 by ksongchu          #+#    #+#             */
/*   Updated: 2023/09/23 11:50:11 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	check_chr(char *s)
{
	int	i;

	i = 0;
	if (!ft_strlen(s))
		return (0);
	while (s[i])
	{
		if ((s[i] >= '0' && s[i] <= '9'))
			i++;
		else if ((s[i] >= '\t' && s[i] <= '\r') || s[i] == ' ')
			i++;
		else if (s[i] == '+' || s[i] == '-')
			i++;
		else
			return (0);
	}
	return (1);
}
