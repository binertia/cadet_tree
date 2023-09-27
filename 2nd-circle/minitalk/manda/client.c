/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:02:37 by ksongchu          #+#    #+#             */
/*   Updated: 2023/09/25 21:48:09 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

static void	send_binary(char *str, pid_t pid)
{
	unsigned char	c;
	int				bit;

	if (*str == 0)
		error_exit("Error : empty message\n");
	while (*str)
	{
		c = *str;
		bit = 7;
		while (bit >= 0)
		{
			if (((c >> bit) & 1) == 0)
			{
				if (kill(pid, SIGUSR1) == -1)
					error_exit("Error : Signal can't be reached\n");
			}
			else if (kill(pid, SIGUSR2) == -1)
				error_exit("Error : Signal can't be reached\n");
			bit--;
			usleep(60);
		}
		str++;
	}
}

int	main(int ac, char *av[])
{
	pid_t	pid;

	if (ac != 3)
		error_exit("Error : uncorrected argument number\n");
	pid = strict_atoi(av[1]);
	send_binary(av[2], pid);
	return (EXIT_SUCCESS);
}
