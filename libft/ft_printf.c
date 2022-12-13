/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewolfghe <ewolfghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:52:13 by ewolfghe          #+#    #+#             */
/*   Updated: 2022/12/13 19:40:07 by ewolfghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_flag(char flag, va_list arg);

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	arg;

	if (!str)
		return (-1);
	len = 0;
	va_start(arg, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			len = len + ft_check_flag(*str, arg);
		}
		else
		{
			ft_putchar(*str);
			len++;
		}
		str++;
	}
	va_end(arg);
	return (len);
}

int	ft_check_flag(char flag, va_list arg)
{
	if (flag == 'c')
		return (ft_putchar(va_arg(arg, int)));
	if (flag == 's')
		return (ft_putstr(va_arg(arg, char *)));
	if (flag == 'p')
		return (ft_putaddress(va_arg(arg, unsigned long int)));
	if (flag == 'd' || flag == 'i')
		return (ft_itoa_printf(va_arg(arg, int)));
	if (flag == 'u')
		return (ft_utoa(va_arg(arg, unsigned int)));
	if (flag == 'x' || flag == 'X')
		return (ft_puthex(va_arg(arg, unsigned int), flag));
	else
		return (ft_putchar(flag));
}
