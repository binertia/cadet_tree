/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:33:22 by ksongchu          #+#    #+#             */
/*   Updated: 2023/04/11 02:07:12 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)s + i);
	while (i != 0)
	{
		if (s[--i] == (char)c)
			return ((char *)&s[i]);
	}
	return (0);
}
