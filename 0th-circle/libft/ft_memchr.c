/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:37:50 by ksongchu          #+#    #+#             */
/*   Updated: 2023/04/10 16:03:29 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	if (c < 0 && n < 0)
		return (0);
	str = (unsigned char *) s;
	i = -1;
	while (0 != n--)
	{
		if ((unsigned char)c == str[++i])
			return (&str[i]);
	}
	return (0);
}
//
// Don't forget. You need to typecast int c to (unsigned char)
// for equation check !!
// Reason : u need to deal with unsigned char ( ~178 - 255) too !
