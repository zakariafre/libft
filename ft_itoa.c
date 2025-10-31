/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahrabar <zahrabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:32:35 by zahrabar          #+#    #+#             */
/*   Updated: 2025/10/22 14:39:41 by zahrabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digit_len(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
	}
	while (n >= 10)
	{
		n = n / 10;
		count++;
	}
	count++;
	return (count);
}

char	*convert(char *str, int nbrlen, long nb, int sign)
{
	int	i;

	i = 0;
	if (nb == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	while (nb > 0)
	{
		if (sign == -1)
			str[i] = '-';
		sign = 1;
		str[nbrlen - 1 - i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		nbrlen;
	int		sign;
	long	nb;

	nb = n;
	sign = 1;
	nbrlen = digit_len(nb);
	if (nb < 0)
	{
		nb *= -1;
		sign = -1;
		nbrlen++;
	}
	str = malloc(nbrlen + 1);
	if (!str)
		return (NULL);
	convert(str, nbrlen, nb, sign);
	str[nbrlen] = '\0';
	return (str);
}
