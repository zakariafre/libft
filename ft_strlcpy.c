/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahrabar <zahrabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:09:10 by zahrabar          #+#    #+#             */
/*   Updated: 2025/10/16 16:58:01 by zahrabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t Slen;
	size_t j;

	Slen = 0;
	j = 0;

	while (src[Slen])
		Slen++;
		
	if (dstsize == 0)
		return(Slen);

	if(Slen >= dstsize)
	{
		j = dstsize - 1;
	}
	else
	{
		j = Slen;
	}
	ft_memcpy(dst, src, j);
	
	dst[j] = '\0';
	return (Slen);
}