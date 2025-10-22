/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahrabar <zahrabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 22:43:46 by zahrabar          #+#    #+#             */
/*   Updated: 2025/10/22 18:03:52 by zahrabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*str2;
	size_t	lenOfS1;

	str2 = NULL;
	if (!s)
		return (NULL);
	lenOfS1 = ft_strlen(s);
	if (start >= lenOfS1)
	{
		str2 = malloc(1);
		if (!str2)
			return (NULL);
		str2[0] = '\0';
		return (str2);
	}
	if (str2)
		return(str2);
	if (len > lenOfS1 - start)
		len = lenOfS1 - start;
	str2 = malloc(len + 1);
	if (!str2)
		return (NULL);
	j = 0;
	while (j < len && s[start])
	{
		str2[j] = s[start];
		start++;
		j++;
	}
	str2[j] = '\0';
	return (str2);
}
