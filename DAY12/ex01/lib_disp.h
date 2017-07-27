/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_disp.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 13:22:53 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/23 14:35:19 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_DISP_H
# define LIB_DISP_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <errno.h>

# define BUF_SIZE 30720
# define OUT_ERROR 2
# define STD_OUT 1

void	ft_putstr_new(int output, char *str);
void	ft_display_file(char *path);
void	ft_read_input(void);
void	is_err(char *path);

#endif
