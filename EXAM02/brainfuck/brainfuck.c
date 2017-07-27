/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 20:14:12 by exam              #+#    #+#             */
/*   Updated: 2017/07/21 21:51:21 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib_brain.h"

int main(int argc, char **argv)
{
	char *op;
	int i = 0;
	int j = 0;
	char *tab;
	int ptr = 0;
	int ptrsave = 5000;
	
	tab = (char *)malloc(sizeof(char) * 2048);
	while(j < 2048)
	{
		tab[j] = 0;
		j++;
	}
	op = (char*)malloc(sizeof(char) * (count_nb_instruct(argv[1]) + 1));
	op = fill_tab_instr(argv[1]);
	while(op[i] != '\0')
	{
		if(op[i] == '+')
			tab[ptr]++;
		else if(op[i] == '-')
			tab[ptr]--;
		else if(op[i] == '>')
			ptr = increm(ptr);
		else if(op[i] == '<')
			ptr = decrem(ptr);
		if(op[i] == '[')
			i = boucle(&tab, &i, &ptr, &op);
		else if(op[i] == '.')
			ft_putchar(tab[ptr]);
	}	

	return(0);
}
