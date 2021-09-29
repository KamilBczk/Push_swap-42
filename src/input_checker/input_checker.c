/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 22:40:40 by kamilbiczyk       #+#    #+#             */
/*   Updated: 2021/09/29 21:04:26 by kamilbiczyk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

int input_checker_doublons(int *numbers, int argc)
{
    int i;
    int f;

    i = 0;
    while (i != argc - 1)
    {
        f = i + 1;
        while (f != argc - 1)
        {
            if (numbers[i] == numbers[f])
                return (-1);
            f++;
        }
        i++;
    }
    return (0);
}

int *input_checker_to_table(int argc, char **argv)
{
    int i;
    int *numbers;

    i = 0;
    numbers = malloc(sizeof(int) * argc - 1);
    if (numbers == NULL)
        return (NULL);
    while (i + 1 < argc)
    {
        i++;
        numbers[i - 1] = ft_atoi(argv[i]);
    }
    return (numbers);
}

int input_checker_if_number(int argc, char **argv)
{
    int i;
    int f;

    i = 1;
    f = 0;
    if (argc == 1)
        return (-1);
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