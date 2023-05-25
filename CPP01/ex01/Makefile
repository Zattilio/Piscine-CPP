# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 15:24:20 by jlanza            #+#    #+#              #
#    Updated: 2023/05/24 19:15:21 by jlanza           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# ----------------------------------- VARS -------------------------------------

NAME	= zombie

SRC		=	main.cpp \
			Zombie.cpp \
			zombieHorde.cpp

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
	$(RM) $(NAME) *.replace

re: fclean all

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.cpp=.o}

# ------------------------------------- TESTS ----------------------------------

test: all
	./$(NAME) 

memory: all
	valgrind ./$(NAME)

# ---------------------------------- PHONY ------------------------------------

.PHONY: all clean fclean re test memory
