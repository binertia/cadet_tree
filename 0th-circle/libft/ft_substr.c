/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:01:55 by ksongchu          #+#    #+#             */
/*   Updated: 2023/04/11 02:36:11 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*p_mal;
	char		*p_return;
	char const	*p_start;

	if (!s)
		return (0);
	if (start > (unsigned int)ft_strlen(s))
	{
		p_mal = malloc(1);
		*p_mal = 0;
		return (p_mal);
	}
	if (ft_strlen(s) > len)
		p_mal = (char *)malloc(sizeof(char) * (len + 1));
	else
		p_mal = (char *)malloc(sizeof(char) * (ft_strlen(s)));
	if (!p_mal)
		return (0);
	p_return = p_mal;
	p_start = s + start;
	while (*p_start && len-- != 0)
		*p_mal++ = *p_start++;
	*p_mal = 0;
	return (p_return);
}
//added (return ("")) fix start > len )  ;
//char	*ft_substr(char const *s, unsigned int start, size_t len)
//{
//	char		*p_mal;
//	char		*p_return;
//	char const	*p_start;
//	
//	if (!(p_mal = (char *)malloc(sizeof(char) * (len + 1))))
//		return (0);
//	p_return = p_mal;
//	p_start = s + start;
//	while (*p_start && len-- != 0)
//		*p_mal++ = *p_start++;
//	*p_mal = 0;
//	return (p_return);
//}
