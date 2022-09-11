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

void    ft_check_views(int *views, int size)
{
    int     i;
    int     j;
    int     k;
    int     l;
    int     m;
    int     n;
    int     o;
    int     p;
    int     q;
    int     r;
    int     s;
    int     t;
    int     u;
    int     v;
    int     w;
    int     x;
    int     y;
    int     z;
    int     a;
    int     b;
    int     c;
    int     d;
    int     e;
    int     f;
    int     g;
    int     h;
    int     **square;

    i = 0;
    j = 0;
    k = 0;
    l = 0;
    m = 0;
    n = 0;
    o = 0;
    p = 0;
    q = 0;
    r = 0;
    s = 0;
    t = 0;
    u = 0;
    v = 0;
    w = 0;
    x = 0;
    y = 0;
    z = 0;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    f = 0;
    g = 0;
    h = 0;
    square = malloc(sizeof(int *) * size);
    while (i < size)
    {
        square[i] = malloc(sizeof(int) * size);
        i++;
    }
    while (j < size)
    {
        square[0][j][0] = views[j];
        j++;
    }
    while (k < size)
    {
        square[k][0][0] = views[k + 4];
        k++;
    }
    while (l < size)
    {
        square[size - 1][l][0] = views[l + 8];
        l++;
    }
    while (m < size)
    {
        square[m][size - 1][0] = views[m + 12];
        m++;
    }
    while (n < size)
    {
        square[1][n][0] = views[n];
        n++;
    }
    while (o < size)
    {
        square[o][1][0] = views[o + 4];