# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/19 10:50:49 by chhoflac          #+#    #+#              #
#    Updated: 2025/04/25 12:29:14 by chhoflac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Materia

SOURCES = main.cpp \
	AMateria.cpp \
	Character.cpp \
	Cure.cpp \
	Ice.cpp \
	MateriaSource.cpp 

OBJS = $(SOURCES:.cpp=.o)

RM = rm -rf

CC = c++

FLAGS = -Werror -Wextra -Wall

all: $(NAME)

$(NAME):$(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) --std=c++98

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re