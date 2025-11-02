/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahrabar <zahrabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 00:29:57 by zahrabar          #+#    #+#             */
/*   Updated: 2025/10/22 14:34:58 by zahrabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	al_space;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	al_space = count * size;
	p = malloc(al_space);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, al_space);
	return (p);
}
