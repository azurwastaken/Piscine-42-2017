/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 20:05:02 by exam              #+#    #+#             */
/*   Updated: 2017/07/14 21:30:32 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
long ft_atol(char *str)
{
	long res;
	int negative;
	int i;

	res = 0;
	i = 0;
	negative = 0;
	if(!str)
		return(0);
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			negative = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res += str[i] - '0';
		i++;
	}
	res = (negative) ? res * -1 : res;
	return(res);
}

int is_prime(unsigned int nb)
{
	unsigned int i;
	
	i = 0;	
	if (nb == 2)
		return (1);
	else if(nb % 2 != 0 && nb != 2)
	{
		while(i < nb)
		{
			if(nb % i == 0)
				return(0);
			i++;
		}
		return(1);
	}
	return(0);
}

long long ft_add_prime_sum(unsigned int nb)
{
	if(nb == 2)
		return(2);
	else if(is_prime(nb) == 1)
		return(nb + ft_add_prime_sum(nb - 1));
	else if(is_prime(nb) == 0)
		return(ft_add_prime_sum(nb - 1));
	
	return(0);
}

void ft_putnbr(long long nb)
{
	char tab[30];
	int i;
	int j = 0;
	
	i = 0;
	while(!(nb / 10 == 0 && nb % 10 == 0))
	{
		tab[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	tab[i]='\0';
	while(tab[j])
	{
		printf("%s",tab);
		j++;
	}
	while(i > 0)
	{
		write(1, &tab[i], 1);
		i--;
	}
}

int main(int argc, char **argv)
{
	int res;
	unsigned int nb;
	int i;

	res = 0;
	i = 1;
	if(argc == 2)
	{
		if(ft_atol(argv[1]) > 1)
		{
			nb = (unsigned int)ft_atol(argv[1]);
			ft_putnbr(ft_add_prime_sum(nb));			
		}
		else
			write(1, "0", 1);	
	}
	else
		write(1, "0", 1);	
	write(1 , "\n", 1);
	return(0);
}
