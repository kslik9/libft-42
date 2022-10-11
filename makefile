# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kslik <kslik@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 14:35:46 by kslik             #+#    #+#              #
#    Updated: 2022/10/05 14:42:07 by kslik            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=$(wildcard *.c)
DEPS		= libft.h
OBJS		=$(SRCS:.c=.o)
CC			=gcc
CFLAGS 		=-Wall -Wextra -Werror
RM 			=rm -rf
NAME		=libft.a

%.o.%:c ${DEPS}
			${CC} ${CFLAGS} -c $< -o $@
$(NAME): $(OBJS)
			ar rc ${NAME} $^
all:		${NAME}

clean:
		${RM} ${OBJS}
fclean :	clean
			${RM} ${NAME}
re :		fclean all