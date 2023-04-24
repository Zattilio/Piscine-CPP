# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 15:24:20 by jlanza            #+#    #+#              #
#    Updated: 2023/04/24 15:16:56 by jlanza           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# ----------------------------------- VARS -------------------------------------

NAME	= megaphone

SRC		= megaphone.cpp

OBJS	= $(SRC:.cpp=.o)

CFLAGS	= -Wall -Wextra -Werror -std=c++98

CC		= c++

RM		= rm -f

# ---------------------------------- RULES ------------------------------------

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.cpp=.o}

# ------------------------------------- TESTS ----------------------------------

test1: all
	./$(NAME) "shhhhh... I think the students are asleep..."

test2: all
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."

test3: all
	./$(NAME)

# ---------------------------------- PHONY ------------------------------------

.PHONY: all clean fclean re
