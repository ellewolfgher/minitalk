/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewolfghe <ewolfghe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:32:03 by ewolfghe          #+#    #+#             */
/*   Updated: 2022/09/02 17:02:15 by ewolfghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ddst;
	char	*ssrc;
	size_t	i;

	ddst = ((char *)dest);
	ssrc = ((char *)src);
	i = 1;
	if (ssrc < ddst)
	{
		while (i <= n)
		{
			ddst[n - i] = ssrc[n - i];
			i++;
		}
	}
	else
		ft_memcpy(ddst, ssrc, n);
	return (dest);
}
