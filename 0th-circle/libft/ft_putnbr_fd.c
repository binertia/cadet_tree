/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:27:15 by ksongchu          #+#    #+#             */
/*   Updated: 2023/04/10 16:19:13 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// use long for protect min int case;

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	i;
	char	c;

	i = n;
	if (i < 0)
	{
		write(fd, "-", 1);
		i = i * -1;
	}
	if (i > 9)
		ft_putnbr_fd((i / 10), fd);
	c = (i % 10) + '0';
	write(fd, &c, 1);
}
//int	main()
//{
//	int	i = 12345;
//
//	ft_putnbr_fd(i,1);
//}
