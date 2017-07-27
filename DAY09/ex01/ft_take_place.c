/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_place.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 17:48:23 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/13 20:28:18 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hour(int hour)
{
	char c;

	if ((hour % 13 < 10) && (hour < 22) && (hour > 0))
	{
		if (hour >= 13)
			hour++;
		hour = hour % 13;
		c = hour + '0';
		write(1, "0", 1);
		write(1, &c, 1);
	}
	else
	{
		hour = (hour >= 22) ? hour - 12 : hour;
		hour = (hour == 0) ? 12 : hour;
		hour = hour % 13;
		hour = hour % 10;
		c = hour + '0';
		write(1, "1", 2);
		write(1, &c, 1);
	}
}

void	print_xm(int hour)
{
	if (hour < 12 && hour >= 0)
		write(1, " A.M.", 5);
	else
		write(1, " P.M.", 5);
}

void	ft_takes_place(int hour)
{
	write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 35);
	print_hour(hour);
	write(1, ":00", 3);
	print_xm(hour);
	write(1, " AND ", 5);
	if (hour == 23)
		hour = -1;
	print_hour(hour + 1);
	write(1, ":00", 3);
	print_xm(hour + 1);
	write(1, "\n", 1);
}
