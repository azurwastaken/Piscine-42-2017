/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_brain.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 20:26:10 by exam              #+#    #+#             */
/*   Updated: 2017/07/21 21:49:19 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_brain.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int ft_is_instruct(char c)
{
	if(c == '>' || c == '<' || c == '+' || c == '-' || c == '.' || c == '[' 
			|| c == ']')
		return(1);
	else
		return(0);
}

int count_nb_instruct(char *str)
{
	int i = 0;
	int nb_inst = 0;
	
	while(str[i] != '\0')
	{
		if(ft_is_instruct(str[i]) == 1)
			nb_inst++;
		i++;
	}
	return(nb_inst);
}

char *fill_tab_instr(char *thrash)
{
	char *str;
	int i = 0;
	int j = 0;
	
	str = (char*)malloc(sizeof(char) * (count_nb_instruct(thrash) + 1));

	while(thrash[i] != '\0')
	{
		if(ft_is_instruct(thrash[i]) == 1)
		{
			str[j] = thrash[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return(str);
}


