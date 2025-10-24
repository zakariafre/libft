/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahrabar <zahrabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 23:15:24 by zahrabar          #+#    #+#             */
/*   Updated: 2025/10/23 15:43:25 by zahrabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	w_count(char const *s, char c)
{
	int	count_word;
	int	inside_the_word;
	int	sep;

	sep = 1;
	count_word = 0;
	inside_the_word = 0;
	while (*s)
	{
		if (*s != c)
			sep = 0;
		else
			sep = 1;
		if (sep == 0)
			inside_the_word = 1;
		else if (sep == 1 && inside_the_word == 1)
		{
			count_word++;
			inside_the_word = 0;
		}
		s++;
	}
	if (inside_the_word == 1)
		count_word++;
	return (count_word);
}

static void	free_all_space(char **arr, int j)
{
	while (j > 0)
	{
		j--;
		free(arr[j]);
	}
	free(arr);
}

static char	fill_word(char **arr, int j, const char *start, const char *end)
{
	int	len;

	len = end - start;
	arr[j] = malloc(len + 1);
	if (!arr[j])
	{
		free_all_space(arr, j);
		return (0);
	}
	if (start != NULL)
		ft_strlcpy(arr[j], start, len + 1);
	return (1);
}

static char	**fill_arr(char const *s, char c, char **arr)
{
	int			j;
	char const	*start;

	start = NULL;
	j = 0;
	while (1)
	{
		if (*s != c && start == NULL)
			start = s;
		if ((start != NULL) && (*s == c || *s == '\0'))
		{
			if (s > start && !fill_word(arr, j, start, s))
				return (NULL);
			if (s > start)
				j++;
			start = NULL;
		}
		if (*s == '\0')
			break ;
		s++;
	}
	arr[j] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = malloc((w_count(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	if (!fill_arr(s, c, arr))
		return (NULL);
	return (arr);
}
