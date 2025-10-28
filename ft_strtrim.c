/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahrabar <zahrabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:04:28 by zahrabar          #+#    #+#             */
/*   Updated: 2025/10/23 20:29:35 by zahrabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*copytodest(void *s2, char const *s1, int memlen, int start)
{
	int		i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < memlen)
	{
		str2[i] = str1[start + i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		start;
	int		end;
	int		i;
	int		memlen;

	end = 0;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	if (set[0] == '\0')
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	memlen = end - start;
	s2 = malloc(memlen + 1);
	if (!s2)
		return (NULL);
	copytodest(s2, s1, memlen, start);
	return (s2);
}
