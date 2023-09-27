/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:38:01 by ksongchu          #+#    #+#             */
/*   Updated: 2023/04/10 16:04:39 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#define PUNC unsigned char*

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	PUNC	str1;
	PUNC	str2;
	size_t	index;

	str1 = (PUNC) s1;
	str2 = (PUNC) s2;
	index = 0;
	while (0 != n--)
	{
		if (str1[index] != str2[index])
			return (str1[index] - str2[index]);
	index++;
	}
	return (0);
}
//
//int main()
//{
//  char *s = "abcdefghijkm";
//  char *i = "abcdefghijkl";
//  printf("%d\n", ft_memcmp(s,i,112));
//  printf("%d", memcmp(s,i,112));
//  return (0);
//}
