NAME = replacer

REPLACER = main.cpp

all: $(NAME)

$(NAME): $(REPLACER)
	@g++ -Wall -Wextra -Werror $(REPLACER) -o $(NAME)
	@echo "REPLACER IS READY!"

clean:
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all

