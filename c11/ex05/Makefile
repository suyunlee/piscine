# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: suylee <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/19 20:54:38 by suylee            #+#    #+#              #
#    Updated: 2020/08/19 21:06:35 by suylee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c	ft_operator.c ft_putnbr.c ft_putstr.c do.c
OBJS	= ${SRCS:.c=.o}

NAME	= do-op
CC		= gcc
CFLAG	= -Wall -Wextra -Werror

${NAME}:	${OBJS}
			${CC} ${CFLAG} -o ${NAME} ${OBJS}

all:
			${NAME}

clean:		
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.c.o.:		
			${CC} ${CFLAH} -c -o ${<:.c=.o} $<

.PHONY:		all clean fclean re
		
