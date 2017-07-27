/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 18:21:17 by exam              #+#    #+#             */
/*   Updated: 2017/07/14 18:39:23 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_strrev(char *str)
{
	int i;
	int j;
	char tmp;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (i > j)
	{
		tmp = str[j];
		str[j] = str [i];
		str[i] = tmp;
		i--;
		j++;
	}
	i = 0;
	while(str[i] != '\0')
	{
		write(1,&str[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if(argc > 1)
		ft_print_strrev(argv[1]);
	write(1,"\n",1);
	return (0);
}
