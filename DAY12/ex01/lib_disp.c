/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_disp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 13:21:01 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/25 15:52:48 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_disp.h"

void	ft_display_file(char *path)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(path, O_RDWR, S_IRUSR);
	is_err(path);
	if (fd != -1 && (errno == 0 || errno == 9))
	{
		while ((ret = read(fd, buf, BUF_SIZE)) && ret != -1)
		{
			buf[ret] = '\0';
			ft_putstr_new(STD_OUT, buf);
		}
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

void	is_err(char *path)
{
	if (errno == 21)
	{
		ft_putstr_new(OUT_ERROR, "cat: ");
		ft_putstr_new(OUT_ERROR, path);
		ft_putstr_new(OUT_ERROR, ": Is a directory\n");
	}
	else if (errno == 20 || errno == 2)
	{
		ft_putstr_new(OUT_ERROR, "cat: ");
		ft_putstr_new(OUT_ERROR, path);
		ft_putstr_new(OUT_ERROR, ": No such file or directory\n");
	}
}

void	ft_read_input(void)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	while ((ret = read(1, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr_new(STD_OUT, buf);
	}
}
