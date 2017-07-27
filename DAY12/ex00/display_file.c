/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 11:00:22 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/23 13:44:45 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_disp.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_display_file(argv[1]);
	else if (argc > 2)
		ft_putstr_new(OUT_ERROR, "Too many arguments.\n");
	else
		ft_putstr_new(OUT_ERROR, "File name missing.\n");
}
