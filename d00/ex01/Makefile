NAME = phonebook

SRCS = contacts.class.cpp \
		contact.class.cpp \

MAIN = phonebook.cpp

HEADERS = contacts.class.hpp \
		contact.class.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS) $(MAIN)
	@g++ -Wall -Wextra -Werror $(MAIN) $(SRCS) -o $(NAME)
	@echo "PHONEBOOK IS READY!"

clean:
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all

