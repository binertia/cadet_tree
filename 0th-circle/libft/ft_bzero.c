/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:35:44 by ksongchu          #+#    #+#             */
/*   Updated: 2023/04/10 15:56:17 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *) s;
	while (0 != n--)
		*str++ = 0;
}
//int main()
//{
//  char i[10] = "hello";
//  printf("%s\n%zu",i,sizeof(i));
//  ft_bzero(i+2,-1);
//  printf("%s", i);
//  return (0);
//}
