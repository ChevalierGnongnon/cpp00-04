# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/19 10:29:49 by chhoflac          #+#    #+#              #
#    Updated: 2025/04/23 14:30:40 by chhoflac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animals

SOURCES = Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		main.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp

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