/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 19:19:42 by ksongchu          #+#    #+#             */
/*   Updated: 2023/04/11 02:10:51 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p_mal;
	size_t	len;
	char	*p_result;

	if (count >= SIZE_MAX && size >= SIZE_MAX)
		return (0);
	len = count * size;
	p_mal = malloc(len);
	if (!p_mal)
		return (0);
	p_result = p_mal;
	while (len--)
		*p_mal++ = 0;
	return (p_result);
}
