/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewolfghe <ewolfghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:22:38 by ewolfghe          #+#    #+#             */
/*   Updated: 2022/12/13 19:40:56 by ewolfghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex(unsigned long n, int flag)
{
	int	len;

	len = 0;
	if (n >= 16)
	{
		len = len + ft_puthex((n / 16), flag);
		len = len + ft_puthex((n % 16), flag);
	}
	else
	{
		if (n < 10)
			return (ft_putchar(HEX[n]));
		else
			return (ft_putchar(HEX[n] - ('x' - flag)));
	}
	return (len);
}
