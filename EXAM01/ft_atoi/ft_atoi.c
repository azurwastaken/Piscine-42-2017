/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 19:03:43 by exam              #+#    #+#             */
/*   Updated: 2017/07/14 20:04:51 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
	long res;
	int nb;
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
	nb = (int)res;
	return(nb);
}
