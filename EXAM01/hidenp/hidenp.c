/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 21:37:38 by exam              #+#    #+#             */
/*   Updated: 2017/07/14 21:51:35 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_strstr_pers(char *a, char *tofind)
{
	int i = 0;
	int j = 0;

	while(a[i] != '\0')
	{
		if(a[i] == tofind[j] && tofind[j] != '\0')
			j++;
		i++;		
	}
	if(tofind[j] == '\0')
		return(1);
	else
		return(0);
}

int main(int argc, char **argv)
{
	char a;

	if(argc == 3)
	{
		a = ft_strstr_pers(argv[2], argv[1]) + '0';
		write(1, &a, 1);
	}
	write(1, "\n", 1);
	return(0);
}
