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
	size_t	allocated_space;

	allocated_space = count * size;
	p = malloc(allocated_space);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, allocated_space);
	return (p);
}
