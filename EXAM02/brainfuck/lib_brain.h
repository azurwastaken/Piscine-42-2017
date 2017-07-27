/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_brain.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 20:25:51 by exam              #+#    #+#             */
/*   Updated: 2017/07/21 21:51:19 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_BRAIN_H
# define LIB_BRAIN_H

#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c);
void ft_putstr(char *str);
int count_nb_instruct(char *str);
int ft_is_instruct(char c);
char *fill_tab_instr(char *thrash);
int increm(int ptr);
int decrem(int ptr);
int boucle(char **tab, int *i,int *ptr, char **op);

#endif
