SRC = main.cpp 
OBJ = $(SRC:%.cpp=$(OBJ_FOLDER)/%.o)
DEP = $(OBJ:.o=.d)

OBJ_FOLDER = output
NAME = ex02
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
