/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahrabar <zahrabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 22:32:53 by zahrabar          #+#    #+#             */
/*   Updated: 2025/10/23 16:57:35 by zahrabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;

	char a = (char)c;
	char *str = (char *)s;
	
	i = 0;
	while(str[i])
		i++;
	
	if(a == '\0')
		return (&str[i]);
	
	while(i >= 0)
	{
		if (str[i] == a)
		{
			return (&str[i]);
		}
		i--;
	}
	return (NULL);
}