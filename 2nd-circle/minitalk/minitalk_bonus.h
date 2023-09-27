/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:21:26 by ksongchu          #+#    #+#             */
/*   Updated: 2023/09/25 18:35:28 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include <stdio.h>
# include <signal.h>
# include <unistd.h>
# include <stdlib.h>

//utils
void	error_exit(char *s);
char	*ft_itoa(int n);
int		strict_atoi(const char *str);
int		ft_strlen(char *s);
#endif
