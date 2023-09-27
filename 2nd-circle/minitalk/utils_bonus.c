/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:26:58 by ksongchu          #+#    #+#             */
/*   Updated: 2023/09/25 21:32:35 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	error_exit(char *s)
{
	write(STDERR_FILENO, s, ft_strlen(s));
	exit(EXIT_FAILURE);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static int	findintlen(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i = 1;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		j;
	int		k;
	long	num;
	char	*p_r;

	num = n;
	k = findintlen(num);
	j = 0;
	p_r = (char *)malloc(sizeof(char) * (k + 1));
	if (!p_r)
		return (0);
	if (num < 0)
	{
		j = 1;
		num *= -1;
		p_r[0] = '-';
	}
	p_r[k] = 0;
	while (k-- != j)
	{
		p_r[k] = (num % 10) + '0';
		num /= 10;
	}
	return (p_r);
}

int	strict_atoi(const char *str)
{
	int			result;
	const char	*temp;

	temp = str;
	while (*temp)
	{
		if (!(*temp >= '0' && *temp <= '9'))
			error_exit("Error : PID should contain only number\n");
		temp++;
	}
	result = 0;
	while (*str >= '0' && *str <= '9')
		result = (result * 10) + *str++ - '0';
	return (result);
}
