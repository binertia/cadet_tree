/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:46:09 by ksongchu          #+#    #+#             */
/*   Updated: 2023/09/23 19:56:51 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_ls	*head;
	int		i;

	head = NULL;
	if (ac < 2)
		return (0);
	i = 1;
	while (av[i])
	{
		if (av[i][0] == 0)
			return (get_error(&head, 1));
		if (!get_list(&head, av[i]))
			return (get_error(NULL, 0));
		i++;
	}
	if (!check_dup(head))
		return (get_error(&head, 1));
	add_index(head);
	if (is_ascen(head))
		return (free_list(&head));
	if (ft_lstlen(head) < 6)
		return (lowlen_case(&head, ft_lstlen(head)));
	sort(&head);
	return (0);
}
