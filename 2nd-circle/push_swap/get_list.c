/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:34:15 by ksongchu          #+#    #+#             */
/*   Updated: 2023/09/23 12:28:59 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_ls **lst, t_ls *new)
{
	t_ls	*tmp;

	if (*lst != NULL)
	{
		tmp = ft_lstlast(*lst);
		tmp -> next = new;
	}
	else
		*lst = new;
}

t_ls	*ft_lstnew(int value)
{
	t_ls	*new;

	new = (t_ls *)malloc(sizeof(t_ls));
	if (new == NULL)
		return (NULL);
	new -> value = value;
	new -> next = NULL;
	return (new);
}

int	ft_lstnew_addback(t_ls **n, int num)
{
	t_ls	*new;

	new = ft_lstnew(num);
	ft_lstadd_back(n, new);
	return (1);
}

int	split_size(char **s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	get_list(t_ls **n, char *str)
{
	char	**chunk;
	int		i;

	i = 0;
	chunk = ft_split(str, ' ');
	while (chunk[i])
	{
		if (!ft_atoi_cb(n, chunk[i], ft_lstnew_addback))
			return (free_all(n, NULL, chunk, split_size(chunk)));
		i++;
	}
	return (free_str(chunk, split_size(chunk)) + 1);
}
