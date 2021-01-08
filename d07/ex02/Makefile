NAME = Array

MAIN = main.cpp

HEADERS = Array.hpp

all: $(NAME)

$(NAME): $(HEADERS) $(MAIN)
	@g++ -Wall -Wextra -Werror $(MAIN) -o $(NAME)
	@echo "Array IS READY!"

clean:
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all
