/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 22:22:32 by ksongchu          #+#    #+#             */
/*   Updated: 2023/04/10 18:43:05 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* if pass NULL argument as *needle .It gonna throw segmentation fault*/
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;
	size_t	i;

	if (!haystack && !len)
		return (0);
	if (*needle == '\0')
		return ((char *)haystack);
	n_len = ft_strlen(needle);
	while (*haystack != '\0' && len-- >= n_len)
	{
		i = 0;
		while (haystack[i] == needle[i] && i < n_len)
		{
			if (i == n_len - 1)
				return ((char *)haystack);
			i++;
		}
		haystack++;
	}
	return (NULL);
}
//int	main()
//{
//	char * i = "hhlli";
//	char * j = "hll";
//
//	printf("%s\n", ft_strnstr(i, 0, 6));
//	//printf("%s", strnstr(i, 0, 6));
//	return (0);
//}
//
//
//
//char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
//{
//	size_t	n_len;
//	size_t	i;
//
//	if (*needle == 0)
//		return ((char *)haystack);
//	n_len = ft_strlen(needle) ;
//	while (len-- != 0)
//	{
//		i = 0;
//		while (haystack[i] == needle[i] && i != len)
//		{
//			if (i == n_len - 1)
//				return ((char *)haystack);
//			i++;
//		}	
//		haystack++;
//	}
//	return (0);
//{
