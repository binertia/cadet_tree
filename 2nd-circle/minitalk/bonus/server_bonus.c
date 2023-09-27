/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:11:45 by ksongchu          #+#    #+#             */
/*   Updated: 2023/09/25 21:37:14 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk_bonus.h"

void	handle_server_sig(int sig_type, siginfo_t *sig_info, void *content)
{
	static int				bit;
	static unsigned char	c;

	(void)content;
	if (!bit)
		bit = 8;
	--bit;
	if (sig_type == SIGUSR2)
		c |= (1 << bit);
	if (!bit)
	{
		if (c)
		{
			write(STDOUT_FILENO, &c, 1);
			c = 0;
		}
		else if (!c)
		{
			if (kill(sig_info -> si_pid, SIGUSR1) == -1)
				error_exit("Error : Can't reach client PID");
		}
	}
}

void	wait_for_signal(void)
{
	struct sigaction	sig;

	sigemptyset(&sig.sa_mask);
	sig.sa_sigaction = (&handle_server_sig);
	sig.sa_flags = SA_SIGINFO;
	if (sigaction(SIGUSR1, &sig, NULL) == -1)
		error_exit("Error : Signal can't catch(USR1)");
	if (sigaction(SIGUSR2, &sig, NULL) == -1)
		error_exit("Error : Signal can't catch(USR2)");
}

int	main(void)
{
	char	*pid_str;

	pid_str = ft_itoa(getpid());
	write(STDOUT_FILENO, pid_str, ft_strlen(pid_str));
	write(STDOUT_FILENO, " : Server PID\n", 14);
	free(pid_str);
	wait_for_signal();
	while (1)
		pause();
	return (0);
}
