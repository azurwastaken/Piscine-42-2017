# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/19 10:24:34 by mcaseaux          #+#    #+#              #
#    Updated: 2017/07/19 14:41:50 by mcaseaux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

SRC = *.c

SRCDIR = srcs

HEADERDIR = includes

all : $(NAME)

$(NAME) : lib
	ranlib $(NAME).a

lib : compil
	ar rc $(NAME).a *.o

compil :
	gcc -c ./$(SRCDIR)/$(SRC) -I $(HEADERDIR)

clean :
	/bin/rm -f *.o

fclean : clean
	/bin/rm -f $(NAME).a

re : fclean all


