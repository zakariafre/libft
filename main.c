/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahrabar <zahrabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:21:24 by zahrabar          #+#    #+#             */
/*   Updated: 2025/10/22 16:33:22 by zahrabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
    char str[] = "hello,world,13333337, ,,";
    char **arr;
    int i = 0;

    arr = ft_split(str, ',');

    while (arr[i])
    {
        printf("'%s'\n", arr[i]);
        i++;
    }

    i = 0;
    while (arr[i])
    {
        free(arr[i]);
        i++;
    }
    free(arr);
    return 0;
}

