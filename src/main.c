/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 22:05:31 by kamilbiczyk       #+#    #+#             */
/*   Updated: 2021/09/28 22:36:48 by kamilbiczyk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int **input_checker_to_table(int argc, char **argv)
{
    int i;
    int **numbers;

    i = 0;
    numbers = malloc(sizeof(int) * argc);
    if (numbers == NULL)
        return (NULL);
    while (i + 1 < argc)
    {
        i++;
        printf("%d : %s\n", i, argv[i]);
    }
    return (0);
}

int input_checker_if_number(int argc, char **argv)
{
    int i;
    int f;

    i = 1;
    f = 0;
    while (i < argc)
    {
        while (argv[i][f] != '\0')
        {
            if (!(argv[i][f] >= 48 && argv[i][f] <= 57))
                return (-1);
            f++;
        }
        f = 0;
        i++;
    }
    return (0);
}

void display_error(void)
{
    write(1, "Error\n", 6);
}

int main(int argc, char **argv)
{
    if (input_checker_if_number(argc, argv) == -1)
        display_error();
    if (input_checker_to_table(argc, argv) == NULL)
        display_error();
    
}