/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:42:14 by ksongchu          #+#    #+#             */
/*   Updated: 2023/04/10 16:06:08 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

#define P_V void *
#define UC unsigned char *

void	*ft_memcpy(P_V dst, const P_V src, size_t n)
{
	const UC	love;
	UC			temp;

	if (!src && !dst)
		return (0);
	love = src;
	temp = dst;
	while (0 != n--)
		*temp++ = *love++;
	return (dst);
}
// added handling when dst & src is all null pointer;
//int main()
//{
//  char i[6] = "hello";
//  char j[6] = "world";
//  char k[6] = "liveu";
//
//  printf("%p", i);
//  printf("%p\n",ft_memcpy(i,j,0));
//  ft_memcpy(i,k,4);
//  printf("%s", i);
//  return(0);
//}
