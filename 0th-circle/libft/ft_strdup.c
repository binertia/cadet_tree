/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 19:37:33 by ksongchu          #+#    #+#             */
/*   Updated: 2023/04/10 16:25:44 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	leng;
	char	*p_mal;	
	char	*p_return;

	leng = 0;
	while (s1[leng])
		leng++;
	p_mal = (char *)malloc(sizeof(char) * (leng + 1));
	if (!p_mal)
		return (0);
	p_return = p_mal;
	while (leng-- != 0)
		*p_mal++ = *s1++;
	*p_mal = 0;
	return (p_return);
}
