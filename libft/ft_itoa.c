/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewolfghe <ewolfghe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:15:28 by ewolfghe          #+#    #+#             */
/*   Updated: 2022/09/12 21:29:53 by ewolfghe         ###   ########.fr       */
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

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_count(n) + (n < 0);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
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
	return (str);
}
