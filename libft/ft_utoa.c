/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewolfghe <ewolfghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:39:45 by ewolfghe          #+#    #+#             */
/*   Updated: 2022/12/13 19:40:28 by ewolfghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(unsigned int n)
{
	int	len;

	len = 1;
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_utoa(unsigned int n)
{
	char	*str;
	int		len;

	len = ft_count(n);
	str = (char *) malloc(len + 1);
	if (!str)
		return (0);
	str[len] = 0;
	while (len > 0)
	{
		str[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	len = ft_putstr(str);
	free(str);
	return (len);
}
