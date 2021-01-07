NAME = converter

SRCS = Converter.cpp

MAIN = main.cpp

HEADERS = Converter.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS) $(MAIN)
	@g++ -Wall -Wextra -Werror $(MAIN) $(SRCS) -o $(NAME)
	@echo "CONVERTER IS READY!"

clean:
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all

