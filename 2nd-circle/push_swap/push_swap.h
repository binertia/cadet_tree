/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:47:55 by ksongchu          #+#    #+#             */
/*   Updated: 2023/09/21 00:52:47 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct node
{
	int			value;
	int			index;
	struct node	*next;
}				t_ls;

void	ccase_1(t_ls **a_head, t_ls **b_head);
void	ccase_1_piv(t_ls **a_head, t_ls **b_head);
void	ccase_2(t_ls **a, t_ls **b);
int		lower_pivot(t_ls *head, int pivot);
void	p_back(t_ls **b_head, t_ls **a_head);

void	sort(t_ls **head);
int		get_error(t_ls **n, int i);

int		small_select(t_ls *head);
int		eq_pivot(t_ls *head, int pivot);

void	add_index(t_ls *n);
void	case_four(t_ls **ls);
void	case_five(t_ls **a_head);
void	p_back(t_ls **b_head, t_ls **a_head);
int		check_chr(char *str);
int		check_dup(t_ls *n);
int		ft_atoi_cb(t_ls **n, char *s, int (*fn)(t_ls **, int));

int		split_size(char **str);
int		free_str(char **s, int end_line);
int		free_list(t_ls **n);
int		free_all(t_ls **head, t_ls **other, char **s, int num);

t_ls	*ft_lstlast(t_ls *lst);
int		ft_lstlen(t_ls *n);
t_ls	*ft_lstlast(t_ls *n);
int		ft_lstnew_addback(t_ls **n, int num);
int		get_list(t_ls **n, char *str);
void	ft_mainout(t_ls **a_l, t_ls **b_l, int num, void (*fn)(t_ls **));
char	**ft_split(char const *s, char c);
int		lowlen_case(t_ls **head, int nth_case);

void	ft_single_out(t_ls **n, char c, void (*f)(t_ls **));
void	ft_push(t_ls **s, t_ls **d, char c);
void	ft_swap(t_ls **head);
void	ft_rev(t_ls **head);
void	ft_rrev(t_ls **head);

int		is_ascen(t_ls *n);
void	radix(t_ls **n, t_ls **s);
#endif
