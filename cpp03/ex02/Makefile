# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/10 11:19:09 by chhoflac          #+#    #+#              #
#    Updated: 2025/04/23 17:31:21 by chhoflac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap

SOURCES = main.cpp \
	ScavTrap.cpp \
	FragTrap.cpp \
	ClapTrap.cpp

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