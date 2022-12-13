/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewolfghe <ewolfghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:45:46 by ewolfghe          #+#    #+#             */
/*   Updated: 2022/12/13 19:47:40 by ewolfghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	msg_setter(t_msg *msg, char flag)
{
	if (flag == 'i')
	{
		msg->init = 1;
		msg->index = 0;
	}
	else if (flag == 'r')
	{
		msg->init = 0;
		msg->index = 0;
	}
}

void	end_byte(t_msg *msg, char *c)
{
	if (*c == '\0')
		ft_printf("\n");
	write(1, c, 1);
	*c = 0xFF;
	msg_setter(msg, 'r');
}

void	handler(int signal, siginfo_t *info, void *ucontext)
{
	static char		c = 0xFF;
	static t_msg	msg;
	int				pid;

	pid = info->si_pid;
	if (!msg.init)
		msg_setter(&msg, 'i');
	if (signal == SIGUSR1)
		c ^= 128 >> msg.index;
	if (signal == SIGUSR2)
		c |= 128 >> msg.index;
	if (msg.index == 7)
		end_byte(&msg, &c);
	msg.index++;
	kill(pid, SIGUSR1);
	(void)ucontext;
}

int	main(void)
{
	struct sigaction	sigact;
	sigset_t			sigset;

	sigemptyset(&sigset);
	sigact.sa_mask = sigset;
	sigact.sa_flags = SA_SIGINFO;
	sigact.sa_sigaction = handler;
	ft_printf("PID: %d\n", getpid());
	sigaction(SIGUSR1, &sigact, NULL);
	sigaction(SIGUSR2, &sigact, NULL);
	while (1)
		pause();
	return (0);
}
