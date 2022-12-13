/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewolfghe <ewolfghe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 02:20:15 by ewolfghe          #+#    #+#             */
/*   Updated: 2022/09/02 02:22:03 by ewolfghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*p;

	str = malloc(ft_strlen(s1) + 1);
	p = str;
	while (*s1)
		*p++ = *s1++;
	*p = '\0';
	return (str);
}
