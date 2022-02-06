# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: suylee <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/16 12:02:58 by suylee            #+#    #+#              #
#    Updated: 2020/08/17 08:21:12 by suylee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=  ftmk.c

OBJS	= ${SRCS:.c=.o}

NAME	= ft_display_file

CC		= gcc
CFLOG	= -Wall -Wextra -Werror

${NAME]:	${OBJS}
			${CC} ${CFLOG} ${OBJS}

all:		${NAME}

clean:		
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

.PHONY:		all clean fclean
