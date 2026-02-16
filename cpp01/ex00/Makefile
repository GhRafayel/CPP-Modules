# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/01 11:15:07 by rghazary          #+#    #+#              #
#    Updated: 2025/08/01 11:15:08 by rghazary         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
OBJ = $(SRC:%.cpp=$(OBJ_FOLDER)/%.o)
DEP = $(OBJ:.o=.d)

OBJ_FOLDER = output
NAME = ex00
C	 = c++
FLAG = -Wall -Wextra -Werror -std=c++98 -MMD
COMP = $(C) $(FLAG)

all : create-dirs $(NAME)

create-dirs :
	mkdir -p $(OBJ_FOLDER)

$(NAME) : $(OBJ)
	$(COMP) -o $(NAME) $(OBJ)

$(OBJ_FOLDER)/%.o : %.cpp
	$(COMP) -c $< -o $@

clean : 
	rm -rf $(OBJ_FOLDER)

fclean : clean 
	rm -f $(NAME)

re : fclean all

-include $(DEP)

.PHONY: all clean fclean re create-dirs
