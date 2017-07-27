/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 19:35:29 by exam              #+#    #+#             */
/*   Updated: 2017/07/21 20:07:50 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_nbsize(int nb)
{
	int i = 2;

	while(nb / 10 != 0)
	{
		nb = nb / 10;
		i++;
	}
	return(i);
}

unsigned int ft_vabs(int nb)
{
	unsigned int vabs;
	
	if(nb < 0)
		vabs = (unsigned int)(nb * -1);
	else
		vabs = (unsigned int)nb;
	return(vabs);
}

char	*ft_itoa(int nbr)
{
	char *str;
	int size;
	unsigned int vabs;

	size = ft_nbsize(nbr);
	if(nbr >= 0)
		str = (char *)malloc(sizeof(char) * size);
	else
	{
		size++;
		str = (char *)malloc(sizeof(char) * (size));
	}
	vabs = ft_vabs(nbr); 
	size--;
	str[size] = '\0';
	size--;
	if(nbr < 0)
	{
		str[0] = '-';
		while(size > 0)
		{
			str[size] = vabs % 10 + '0';
			vabs = vabs / 10;
			size--;
		}
	}
	else 
	{
		while(size >= 0)
		{
			str[size] = vabs % 10 + '0';
			vabs = vabs / 10;
			size--;
		}
	}
	return(str);
}
