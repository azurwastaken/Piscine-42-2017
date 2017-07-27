/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_disp.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 13:22:53 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/23 18:24:43 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_DISP_H
# define LIB_DISP_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <errno.h>

# define BUF_SIZE 1
# define OUT_ERROR 2
# define STD_OUT 1

void	ft_putstr_new(int output, char *str);
void	ft_display_file(char *path, int nbr, char *str);
void	ft_read_input();
int		ft_count_char(int fd);
int		ft_nbtoskip(int nbr, int nb, char first_char);
int		ft_atoi(char *str);
void	is_err(char *path);

#endif
