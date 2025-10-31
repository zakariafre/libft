/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahrabar <zahrabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:28:22 by zahrabar          #+#    #+#             */
/*   Updated: 2025/10/18 14:00:49 by zahrabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*source;
	char	*dest;

	source = (char *)src;
	dest = (char *)dst;
	i = 0;
	if (source == dest)
		return (dest);
	if (!source && !dest)
		return (NULL);
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}
