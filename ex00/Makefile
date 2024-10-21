CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -g3 -std=c++98
#-fsanitize=address

NAME = Fixed
FILES = main.cpp Fixed.cpp
OBJ = $(FILES:.cpp=.o)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@printf "compilation done!\n"

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@printf "."

all: $(NAME)
	clean

clean:
	@rm -f $(OBJ)
	@echo "object files deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "binaries files deleted"

re: fclean all

.PHONY: all clean fclean re bonus
