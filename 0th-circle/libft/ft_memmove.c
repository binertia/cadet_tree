/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:13:03 by ksongchu          #+#    #+#             */
/*   Updated: 2023/04/10 16:15:04 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*result;
	const char	*from;
	size_t		i;

	if ((!dst && !len) || (!dst && !src))
		return (0);
	result = (char *)dst;
	from = (char *)src;
	if (from < result)
	{
		while (len-- != 0)
			result[len] = from[len];
	}
	else
	{
		i = -1;
		while (++i != len)
			result[i] = from[i];
	}
	return (result);
}
// !dst && !src  is for handling two params that got passed as void
//#include <stdio.h>
//#include <string.h>
//
//int	main(){
//	char	*s = "hello";
//	char	*j;
//	void	*dst;
//
//	printf("%p\n", j);
//	printf("%p\n", s);
//	printf("%p\n", dst);
//	dst = memmove(j, s, 100);
//	printf("%p\n", j);
//	printf("%p\n", s);
//	printf("%p\n", dst);
//	printf("%s", dst);
//}
