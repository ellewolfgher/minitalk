/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewolfghe <ewolfghe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:43:21 by ewolfghe          #+#    #+#             */
/*   Updated: 2022/09/06 21:51:41 by ewolfghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 == *s2 && *s2 != '\0' && n > 0)
	{
		++s1;
		++s2;
		--n;
	}
	if (*s1 == *s2 || n == 0)
		return (0);
	if (*(unsigned char *)s1 < *(unsigned char *)s2)
		return (-1);
	return (1);
}
