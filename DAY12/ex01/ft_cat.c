/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 21:00:12 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/25 15:40:02 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_disp.h"

int	main(int argc, char **argv)
{
	int i;

	if (argc >= 2)
	{
		i = 1;
		while (argv[i])
		{
			ft_display_file(argv[i]);
			i++;
		}
	}
	else
		ft_read_input();
}
