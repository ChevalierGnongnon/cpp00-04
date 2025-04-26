# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/17 14:05:16 by chhoflac          #+#    #+#              #
#    Updated: 2025/04/23 17:22:38 by chhoflac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

SOURCES = main.cpp \
		Harl.cpp

OBJS = $(SOURCES:.cpp=.o)

RM = rm -rf

CC = c++

FLAGS = -Werror -Wextra -Wall --std=c++98

all: $(NAME)

$(NAME):$(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re