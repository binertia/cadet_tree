/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:10:10 by ksongchu          #+#    #+#             */
/*   Updated: 2023/06/16 19:54:16 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

size_t	ft_putnbr_custom(long n, int lowercase, int base);
size_t	ft_putnbr_p(unsigned long n);
size_t	ft_putstr(char *s);
size_t	ft_putchar(char c);

char	ft_lowertoupper(char c);
size_t	ft_strlen(char *s);

int		ft_printf(const char *format, ...);
#endif
