/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:29:06 by ksongchu          #+#    #+#             */
/*   Updated: 2023/04/10 16:41:02 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	check_char(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*handle_malloc(void)
{
	char	*result;

	result = (char *)malloc(1);
	if (!result)
		return (0);
	*result = 0;
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;
	size_t	i;

	i = 0;
	start = 0;
	if (!s1 || !*s1)
		return (handle_malloc());
	while (s1[start] && check_char(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end && check_char(set, s1[end]))
		end--;
	if (end < start)
		return (handle_malloc());
	result = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!result)
		return (0);
	while (start <= end)
		result[i++] = s1[start++];
	result[i] = 0;
	return (result);
}
//#include <stdio.h>
//int	main()
//{
//	char	*test;
//
//	test = "asdfasdfuiopfdsfa";
//	char	*one = "asdf";
//	one = " ";
//	test = "  ";
//	printf("%s",ft_strtrim(test, one));
//}

/*
size_t	lenfinder(char const *s)
{
	size_t	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

int	trimmer(char const *s1, char const *set, int indic)
{
	int	i;
	size_t	k;

	i = (lenfinder(s1) * indic) - indic;
	while (s1[i])
	{
		k = 0;
		while (k <= lenfinder(set))
		{
			if (set[k] == s1[i])
			{
				if (!indic)
					i++;
				else
					i--;
				break ;
			}
			if (k == lenfinder(set))
				return (i);
			k++;
		}
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;
	char	*p_return;

	if (!(*s1 || *set))
		return (0);
	start = trimmer(s1, set, 0);
	end = trimmer(s1, set, 1);
	i = end - (start - 1);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	p_return = str;
	while (s1[start] && start <= end)
		*str++ = s1[start++];
	return (p_return);
}
int	main(void)
{
	int	i = 0;
	char	*a = "hello world";
	char	*str = "";
	char *set = "asdf";
	//char	*str = NULL;
	//char	*str = "";
	char *s = ft_strtrim(str, set);
	
	printf("%c" ,s);
	//str = ft_strtrim(a, "\0");
}
*/
