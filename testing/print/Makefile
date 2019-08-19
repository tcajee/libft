# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/19 11:12:48 by tcajee            #+#    #+#              #
#    Updated: 2019/08/19 12:58:00 by tcajee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc


SRCS = ./main.c

OBJS =  $(SRCS:.c=.o)

# $(filter-out $@,$(MAKECMDGOALS):.c=.o)

FLAGS = -Wall -Werror -Wextra

INCS =  ../libft/libft.h

LIB = -L../libft/ -lft

%:
	make re -C ../libft
	$(CC) $(FLAGS) $(NAME) $(INCS) $(LIB) $(SRCS)
	./a.out | cat -e
	# $(filter-out $@,$(MAKECMDGOALS))

