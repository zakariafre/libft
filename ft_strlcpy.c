/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahrabar <zahrabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:09:10 by zahrabar          #+#    #+#             */
/*   Updated: 2025/10/23 20:40:30 by zahrabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	s_len;
	size_t	j;

	s_len = 0;
	j = 0;
	while (src[s_len])
		s_len++;
	if (dstsize == 0)
		return (s_len);
	if (s_len >= dstsize)
	{
		j = dstsize - 1;
	}
	else
	{
		j = s_len;
	}
	ft_memcpy(dst, src, j);
	dst[j] = '\0';
	return (s_len);
}
