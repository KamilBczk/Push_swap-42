/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 22:05:31 by kamilbiczyk       #+#    #+#             */
/*   Updated: 2021/09/29 21:02:50 by kamilbiczyk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void display_error(void)
{
    write(1, "Error\n", 6);
}

int main(int argc, char **argv)
{
    int *numbers_table;

    if (input_checker_if_number(argc, argv) == -1)
        display_error();
    numbers_table = input_checker_to_table(argc, argv);
    if (input_checker_doublons(numbers_table, argc) == -1)
        display_error();
}