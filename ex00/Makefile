CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -g3 -std=c++98
#-fsanitize=address

NAME = Fixed
FILES = main.cpp Fixed.cpp

OBJ_DIR = .obj
OBJ = $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(FILES))

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@printf "compiled ✅\n"

$(OBJ_DIR):
	@mkdir -p .obj

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@printf ". "

all: $(NAME)

clean:
	@rm -rf $(OBJ_DIR)
	@echo "objects cleaned 🧹"

fclean: clean
	@rm -f $(NAME)
	@echo "binaries cleaned 🧹"

re: fclean all

.PHONY: all clean fclean re bonus
