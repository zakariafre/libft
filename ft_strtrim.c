/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahrabar <zahrabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:04:28 by zahrabar          #+#    #+#             */
/*   Updated: 2025/10/22 18:05:18 by zahrabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		start;
	int		end;
	int		memlen;
	int		i;

	end = 0;
	if(!s1 || !set)
		return (NULL);
	if (set[0] == '\0')
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while(end > start && ft_strchr(set, s1[end - 1]))
		end--;
	memlen = end - start;
	s2 = malloc(memlen + 1);
	if (!s2)
		return (NULL);
	i = 0;
	while(i < memlen)
	{
		s2[i] = s1[start];
		i++;
		start++;
	}
	s2[i] = '\0';
	return(s2);
}
