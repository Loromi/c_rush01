/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototype.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romi <romi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 10:04:35 by romi              #+#    #+#             */
/*   Updated: 2022/09/11 10:51:27 by romi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_print_square(int ***square, int size);

int     *ft_get_argv(char *argv);

void    ft_check_views(int *views, int size);

void    ft_print_square(int ***square, int size)
{
    int     i;
    int     j;

    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < size)
        {
            printf("%d ", square[i][j][0]);
            j++;
        }
        printf("\n");
        i++;
    }
}

int     *ft_get_argv(char *argv)
{
    int     *views;
    int     i;
    int     j;
    
    i = 0;
    views = malloc(sizeof(int) * 16);
    while (argv[i])
    {
        if (argv[i] >= '1' && argv[i] <= '4')
            views[i] = argv[i] - '0';
        else
            views[i] = 0;
        i++;
    }
    return (views);
}
