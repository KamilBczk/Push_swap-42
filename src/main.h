/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 21:00:20 by kamilbiczyk       #+#    #+#             */
/*   Updated: 2021/09/29 21:02:32 by kamilbiczyk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* input_checker_utils.c */
int	ft_atoi(const char *str);
/* input_checker.c */
int input_checker_doublons(int *numbers, int argc);
int *input_checker_to_table(int argc, char **argv);
int input_checker_if_number(int argc, char **argv);


#endif