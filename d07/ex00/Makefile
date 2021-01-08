NAME = whatever

MAIN = main.cpp

HEADERS = whatever.hpp

all: $(NAME)

$(NAME): $(HEADERS) $(MAIN)
	@g++ -Wall -Wextra -Werror $(MAIN) -o $(NAME)
	@echo "WHATEVER IS READY!"

clean:
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all

