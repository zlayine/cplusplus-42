NAME = iter

MAIN = main.cpp

HEADERS = iter.hpp

all: $(NAME)

$(NAME): $(HEADERS) $(MAIN)
	@g++ -Wall -Wextra -Werror $(MAIN) -o $(NAME)
	@echo "ITER IS READY!"

clean:
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all

