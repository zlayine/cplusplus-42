NAME = serializer

SRCS = Data.cpp

MAIN = main.cpp

HEADERS = Data.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS) $(MAIN)
	@g++ -Wall -Wextra -Werror $(MAIN) $(SRCS) -o $(NAME)
	@echo "SERIALIZER IS READY!"

clean:
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all

