/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewolfghe <ewolfghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:45:26 by ewolfghe          #+#    #+#             */
/*   Updated: 2022/12/14 14:42:52 by ewolfghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include "../libft/libft.h"
# include <signal.h>
# include <unistd.h>

typedef struct s_byte {
	unsigned int	bit : 1;
}				t_byte;

typedef struct s_msg {
	t_byte			*byte;
	int				index;
	int				init;
	unsigned char	c;
}				t_msg;

#endif
