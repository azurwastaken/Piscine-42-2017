# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/21 16:05:28 by mcaseaux          #+#    #+#              #
#    Updated: 2017/07/25 13:31:25 by mcaseaux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft\_tail

SRC = ft_tail.c lib_disp.c lib_disp2.c

OBJECT = lib_disp.o ft_tail.o lib_disp2.o

$(NAME): all

BIN:
	gcc -Wall -Wextra -Werror -c $(SRC)

all: BIN
	gcc -Wall -Wextra -Werror -o $(NAME) $(OBJECT)

clean:
	/bin/rm -f $(OBJECT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
