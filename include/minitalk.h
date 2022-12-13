/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewolfghe <ewolfghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:45:26 by ewolfghe          #+#    #+#             */
/*   Updated: 2022/12/13 19:20:09 by ewolfghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include "../libft/libft.h"
# include <signal.h>
# include <unistd.h>
# include <stdio.h>	

typedef struct s_byte {
	unsigned int	bit : 1;
}				t_byte;

typedef struct s_msg {
	t_byte			*byte;
	unsigned char	c;
	int				index;
	int				init;
}				t_msg;

#endif
