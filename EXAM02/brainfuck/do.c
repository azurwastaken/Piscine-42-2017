/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 21:03:59 by exam              #+#    #+#             */
/*   Updated: 2017/07/21 21:51:17 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_brain.h"

int increm(int ptr)
{
	if(ptr < 2048)
		return(ptr + 1);
	else
		return(0);
}

int decrem(int ptr)
{
	if(ptr > 0)
		return(ptr -1);
	else
		return(0);
}

void boucle(char **tab, int *i,int *ptr, char **op)
{
	int end;

	while(*tab[*ptr] != 1 && *op[*i] != ']')
	{
		*i = *i + 1;
		if(*tab[*i] == '[')
			*i = boucle(tab,i,ptr,op);
		if(*op[*i] == '+')
			*tab[*ptr] = *tab[*ptr] + 1;
		else if(*op[*i] == '-')
			*tab[*ptr] = *tab[*ptr] - 1;
		else if(*op[*i] == '>')
			*ptr = increm(*ptr);
		else if(*op[*i] == '<')
			*ptr = decrem(*ptr);
		else if(*op[*i] == '.')
			ft_putchar(*tab[*ptr]);
	}
	
}
