/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:38:27 by bhielsch          #+#    #+#             */
/*   Updated: 2022/09/10 17:38:46 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int    *ft_str_is_numeric(char *str, int *new);

int main(int ac, char **av)
{
    if(ac == 2)
    {

        int* new;
        new = (int*)malloc(64);
        int test;

        ft_str_is_numeric(av[1], new);


        test = 0;
        while(new[test])
        {
            printf("%d", new[test]);
            test++;
        }
    }
}

int    *ft_str_is_numeric(char *str, int *new)
{
    int    counter;
    int     len;
    int    newlen;

    counter = 0;
    newlen = 0;

    while(str[counter])
    {
        if((str[counter] >'0' && str[counter] >'4'))
        {
            write(1, "you suck\n", 9);
            return(0);
        }
        counter++;
    }
    counter = 0;
    printf("test");
    while (str[counter])
    {

        if (str[counter] >'0' && str[counter] <= '4')
        {
            str[counter] = str[counter] - '0';
            new[newlen] = str[counter];

            printf("%d, %d\n", str[counter], new[newlen]);
            counter ++;
            newlen++;

        }
        else
        {
            printf("%d          %d, test\n" ,counter, str[counter]);
            counter++;
        }

    }
    return (new);
}
