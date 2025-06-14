# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tde-souz <tde-souz@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/14 12:36:11 by tde-souz          #+#    #+#              #
#    Updated: 2025/06/14 12:43:44 by tde-souz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap
CFLAGS := -Wall -Wextra -Werror
CC := gcc
INCLUDES := include/

SRC_FOLDER := src/
OBJ_FOLDER := obj/

SRCS := $(shell find src/ -type f)
OBJS := $(subst .c,.o,$(subst src/,obj/,${SRCS}))

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${INCLUDES} ${OBJS} -o ${NAME}
	@echo "\n${NAME} is \033[38;5;10mREADY!\033[0m"

${OBJ_FOLDER}%.o: ${SRC_FOLDER}%.c
	@mkdir -p $(dir $@)
	${CC} ${CFLAGS} ${INCLUDES} $< -c -o $@

clean:
	rm -rf ${OBJS}
	rm -rf ${OBJ_FOLDER}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re
