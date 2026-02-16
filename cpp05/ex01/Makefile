# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/09 14:58:16 by rghazary          #+#    #+#              #
#    Updated: 2025/09/09 14:58:18 by rghazary         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Bureaucrat.cpp Form.cpp
OBJ = $(SRC:%.cpp=$(OBJ_FOLDER)/%.o)
DEP = $(OBJ:.o=.d)

OBJ_FOLDER = output
NAME = ex01
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
