/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewolfghe <ewolfghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:15:28 by ewolfghe          #+#    #+#             */
/*   Updated: 2022/12/13 19:41:20 by ewolfghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	len;

	len = 1;
	while (n / 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static int	ft_neg(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	ft_itoa_printf(int n)
{
	char	*str;
	int		len;
	int		size;

	size = ft_count(n) + (n < 0);
	len = ft_count(n) + (n < 0);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len--] = '\0';
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[len] = ft_neg(n % 10) + 48;
		n = n / 10;
		len--;
	}
	ft_putstr(str);
	free(str);
	return (size);
}
