# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/30 13:59:48 by rghazary          #+#    #+#              #
#    Updated: 2025/07/30 13:59:51 by rghazary         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

NAME = megaphone
FLAGS = -Wall -Wextra -Werror -std=c++98 
C = c++

all : $(NAME)

$(NAME): $(OBJ)
	$(C) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(C) $(FLAGS) -c $< -o $@

clean: 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : clean fclean all 

.PHONY: all clean fclean re
