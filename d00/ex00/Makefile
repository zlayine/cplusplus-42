NAME = megaphone

MEGAPHONE = megaphone.cpp

all: $(NAME)

$(NAME): $(MEGAPHONE)
	@g++ -Wall -Wextra -Werror $(MEGAPHONE) -o $(NAME)
	@echo "MEGAPHONE IS READY!"

clean:
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all

