# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/01 17:10:00 by rghazary          #+#    #+#              #
#    Updated: 2025/08/01 17:10:02 by rghazary         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

NAME = main
C = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	$(C) $(FLAGS) -o $(NAME) $(OBJ) 

%.o : %.cpp
	$(C) $(FLAGS) -c $< -o $@ 

clean :
	rm -f $(OBJ) 

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re 
