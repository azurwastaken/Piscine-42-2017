/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 18:10:55 by exam              #+#    #+#             */
/*   Updated: 2017/07/21 18:20:42 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char * str)
{
	int i=0;

	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
int main(int argc, char **argv)
{	
	if(argc > 1)
		ft_putstr(argv[1]);
	ft_putchar('\n');
	return(0);
}
