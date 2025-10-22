/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahrabar <zahrabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:52:58 by zahrabar          #+#    #+#             */
/*   Updated: 2025/10/19 17:14:06 by zahrabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	char *stack;

	stack = (char *)haystack;
	i = 0;
	
	if (needle[0] == '\0')
		return (stack);

	while (i < len && stack[i])
	{
		j = 0;
		while ((i + j) < len && stack[i + j] == needle[j] && stack[i + j])
			j++;
		if (needle[j] == '\0')
			return (stack + i);
		i++;
	}
	return (NULL);
}
