/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:09:13 by ksongchu          #+#    #+#             */
/*   Updated: 2023/04/10 16:30:03 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t ds)
{
	size_t	len;
	char	*tmp;

	if (!d && !ds)
		return (0);
	len = ft_strlen(d);
	if (len >= ds)
		return (ft_strlen(s) + ds);
	tmp = d + len;
	len = ds - len - 1;
	while (*s && len-- > 0)
		*tmp++ = *s++;
	*tmp = 0;
	return (ft_strlen(d) + ft_strlen(s));
}
//bus error if dstsize > dst[size]
// change to ft_strlen after fin
//#include <string.h>
//int	main()
//{
//	char i[2] = "31";
//	char *j = "rrrrrrrrrrrrrrrrrr";
//	printf("%lu\n", sizeof(i));
//	printf("%lu\n", sizeof(i));
//	size_t k = strlcat(i, j, 7);
//	printf("==%s==\n", i);
//	printf("%lu",k);
//	return (0);
//}
