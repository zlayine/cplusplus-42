#include <iostream>
#include <string>
#include "Contact.class.hpp"
#include "Contacts.class.hpp"

void	add_contact_info(Contacts *contacts)
{
	if (contacts->getCurrent() == 8)
		std::cout << "Error: You have reached the contacts limit" << std::endl;
	else
		contacts->addContact();
}

void	search_contact(Contacts *contacts)
{
	std::string	input;

	contacts->displayContacts();
	std::cout << "Who you want to search for ? :";
	std::cin >> input;
	contacts->searchContact(input);
}

int		verify_command(std::string command, Contacts *contacts)
{
	if (command.compare("ADD") == 0)
	{
		add_contact_info(contacts);
		return (0);
	}
	else if (command.compare("SEARCH") == 0)
	{
		search_contact(contacts);
		return (0);
	}
	else if (command.compare("EXIT") == 0)
		return (1);
	else
		std::cout << "Error: Command not found" << std::endl;
	return (0);
}



int		main()
{
	int			end;
	Contacts	contacts;
	std::string		buff;

	end = 0;
	while (end == 0)
	{
		std::cout << "Enter command~> ";
		std::cin >> buff;
		end = verify_command(buff, &contacts);
	}
}