/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewolfghe <ewolfghe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 00:52:11 by ewolfghe          #+#    #+#             */
/*   Updated: 2022/09/09 01:26:21 by ewolfghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
		j--;
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!str || !s1 || !set)
		return (NULL);
	ft_strlcpy(str, &s1[i], j - i + 1);
	return (str);
}
