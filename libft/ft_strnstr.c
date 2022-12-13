/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewolfghe <ewolfghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 19:53:47 by ewolfghe          #+#    #+#             */
/*   Updated: 2022/12/07 14:01:39 by ewolfghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lil, size_t len)
{
	size_t	i;
	size_t	j;

	if (lil == NULL || big == NULL)
		return (NULL);
	if (lil[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while ((big[i + j] == lil[j]) && (i + j) < len)
		{
			if (lil[j + 1] == '\0')
				return ((char *)(&big[i]));
			j++;
		}
		i++;
	}
	return (NULL);
}
