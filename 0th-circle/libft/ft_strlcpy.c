/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:17:13 by ksongchu          #+#    #+#             */
/*   Updated: 2023/04/10 16:31:04 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (0 != dstsize--)
	{
		if (0 == dstsize || src[i] == '\0')
		{
			dst[i] = '\0';
			break ;
		}
		dst[i] = src[i];
		i++;
	}
	return (ft_strlen(src));
}
