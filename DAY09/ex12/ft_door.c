/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 13:48:24 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/14 15:26:31 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] == '\0')
	{
		write(1, str[i], 1);
		i++;
	}
}

t_bool	close_door(t_door *door)
{
	ft_putstr("Door closing...\n");
	door->state = CLOSE;
	return (TRUE);
}

t_bool	is_door_open(t_door *door)
{
	ft_putstr("Door is open ?\n");
	if ((*door).state == TRUE)
	{
		ft_putstr("yes\n");
		return (TRUE);
	}
	else
	{
		ft_putstr("non\n");
		return (FALSE);
	}
}

t_bool	is_door_close(t_door *door)
{
	ft_putstr("Door is close ?");
	if (is_door_open(door) == FALSE)
		return (TRUE);
	else
		return (FALSE);
}
