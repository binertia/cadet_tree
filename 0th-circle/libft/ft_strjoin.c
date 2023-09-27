/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:18:55 by ksongchu          #+#    #+#             */
/*   Updated: 2023/04/10 18:31:21 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p_mal;
	char	*p_return;
	char	*tmp;

	if (!s2 || !s1)
		return (0);
	p_mal = malloc(sizeof(char) * ((ft_strlen(s1)) + (ft_strlen(s2)) + 1));
	if (!p_mal)
		return (NULL);
	p_return = p_mal;
	tmp = (char *)s1;
	while (*tmp)
		*p_mal++ = *tmp++;
	tmp = (char *)s2;
	while (*tmp)
		*p_mal++ = *tmp++;
	*p_mal = 0;
	return (p_return);
}
//
//size_t	lenfinder(char const *s)
//{
//	size_t	len;
//
//	len = 0;
//	while (*s++)
//		len++;
//	return (len);
//}
//
//char	*ft_strjoin(char const *s1, char const *s2)
//{
//	char	*p_mal;
//	char	*p_return;
//
//	p_mal = malloc(sizeof(char) * ((lenfinder(s1)) + (lenfinder(s2)) + 1));
//	if (!p_mal)
//		return (0);
//	p_return = p_mal;
//	while (s1)
//		*p_mal++ = *s1++;
//	while (s2)
//		*p_mal++ = *s2++;
//	*p_mal = 0;
//	return (p_return);
//}
