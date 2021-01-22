NAME = identifier

MAIN = main.cpp

HEADERS = Base.hpp A.hpp B.hpp C.hpp

all: $(NAME)

$(NAME): $(HEADERS) $(MAIN)
	@g++ -Wall -Wextra -Werror $(MAIN) -o $(NAME)
	@echo "IDENTIFIER IS READY!"

clean:
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all

