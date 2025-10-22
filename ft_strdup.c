/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahrabar <zahrabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:31:25 by zahrabar          #+#    #+#             */
/*   Updated: 2025/10/20 11:44:51 by zahrabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	int i;
	char *s2;
	int len;
	char *str = (char *)s1;

	i = 0;
	len = ft_strlen(str);
	s2 = malloc((len + 1) * sizeof(char));

	if(!s2)
		return (NULL);
	
	while(str[i])
	{
		s2[i] = str[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}