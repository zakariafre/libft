/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahrabar <zahrabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 22:43:46 by zahrabar          #+#    #+#             */
/*   Updated: 2025/10/23 18:58:39 by zahrabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*str2;
	size_t	len_s;

	str2 = NULL;
	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	str2 = malloc(len + 1);
	if (!str2)
		return (NULL);
	j = 0;
	while (j < len && s[start + j])
	{
		str2[j] = s[start + j];
		j++;
	}
	str2[j] = '\0';
	return (str2);
}
