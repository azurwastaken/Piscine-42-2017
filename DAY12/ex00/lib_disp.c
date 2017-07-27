/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_disp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 13:21:01 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/23 16:11:28 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_disp.h"

void	ft_display_file(char *path)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(path, O_RDONLY, S_IRUSR);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr_new(STD_OUT, buf);
	}
	close(fd);
}

void	ft_putstr_new(int output, char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(output, &str[i], 1);
		i++;
	}
}
