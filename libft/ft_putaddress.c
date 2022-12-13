/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewolfghe <ewolfghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:15:05 by ewolfghe          #+#    #+#             */
/*   Updated: 2022/12/13 19:41:03 by ewolfghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putaddress(unsigned long int n)
{
	int	len;

	if (n == 0)
		len = ft_putstr("(nil)");
	else
	{
		len = ft_putstr("0x");
		len = len + ft_puthex(n, 'x');
	}
	return (len);
}
