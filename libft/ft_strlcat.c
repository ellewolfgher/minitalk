/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewolfghe <ewolfghe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:08:43 by ewolfghe          #+#    #+#             */
/*   Updated: 2022/09/07 23:34:21 by ewolfghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	slen;
	size_t	dlen;
	size_t	res;
	size_t	i;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	i = 0;
	if (size > dlen)
	{
		res = dlen + slen;
		while (src[i] != '\0' && (dlen + 1) < size)
		{
			dst[dlen] = src[i];
			dlen++;
			i++;
		}
		dst[dlen] = '\0';
	}
	else
		res = size + slen;
	return (res);
}
