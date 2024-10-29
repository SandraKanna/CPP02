CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -g3 -std=c++98 -IIncludes
#-fsanitize=address

NAME = Point
FILES = ${addprefix src/, main.cpp Point.cpp bsp.cpp \
		${addprefix FixedSrc/, Fixed.cpp FixedAccessors.cpp \
		FixedOperators.cpp FixedFunctions.cpp}}

OBJ_DIR = .obj
OBJ = $(patsubst src/%.cpp,$(OBJ_DIR)/src/%.o,$(FILES))

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@printf "compiled ✅\n"

$(OBJ_DIR)/src/%.o: src/%.cpp
	@mkdir -p  $(@D)
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
