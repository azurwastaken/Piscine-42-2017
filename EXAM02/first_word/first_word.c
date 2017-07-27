/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 18:22:26 by exam              #+#    #+#             */
/*   Updated: 2017/07/21 18:47:28 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putstr(char *str)
{
	int i = 0;
	
	while((str[i] == ' ' || str[i] == '\t' )&& str[i] != '\0')
		i++;
	while(str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
	{
		write(1,&str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		ft_putstr(argv[1]);
	write(1, "\n", 1);
	return(0);
}
