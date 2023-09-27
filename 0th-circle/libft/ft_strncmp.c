/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:52:58 by ksongchu          #+#    #+#             */
/*   Updated: 2023/04/10 16:34:02 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != 0 && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
//
//     always use unsigned char typecast
//     for avoid potential issue like `signedness` & `unexpected behave`
//	signedness is a property of data types representing -
//	numbers in computer programs
//int	ft_strncmp(const char *s1, const char *s2, size_t n)
//{
//	size_t		i;
//
//	i = 0;
//	while (s1[i] == s2[i] && s1[i] && s2[i] && n-- != 0)
//		i++;
//	return (s1[i] - s2[i]);
//}
