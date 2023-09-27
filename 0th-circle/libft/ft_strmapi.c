/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:08:35 by ksongchu          #+#    #+#             */
/*   Updated: 2023/04/10 18:38:42 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s_result;
	int		i;

	if (!s || !f)
		return (0);
	s_result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s_result)
		return (0);
	i = 0;
	while (s[i])
	{
		s_result[i] = f(i, s[i]);
		i++;
	}
	s_result[i] = '\0';
	return (s_result);
}
//char new_toupper(unsigned int h,char a)
//{
//	(void)h;
//	return (a - 32);
//}
//
//int	main()
//{
//	char h[10] = "hello";
//
//	printf("%s\n",ft_strmapi(h,new_toupper));
//}
