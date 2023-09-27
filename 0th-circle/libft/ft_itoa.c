/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 22:59:27 by ksongchu          #+#    #+#             */
/*   Updated: 2023/04/10 15:59:21 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// handle 0 
// check -
// get at reverse
// move to s
//
#include "libft.h"

int	findintlen(long n)
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
//#include <stdio.h>
//int	main()
//{
//	int	i = 0;
//
//	printf("-- %s --", ft_itoa(i));
//}
