#include <iostream>
#include <string>
#include "Contact.class.hpp"
#include "Contacts.class.hpp"

using namespace std;

Contacts::Contacts(void) {
	current = 0;
	return;
}

Contacts::~Contacts(void) {
	return ;
}

Contact	*Contacts::getContact(int index) {
	int 	i;

	i = 0;
	while (i < current)
	{
		if (contacts[i].index == index)
			return &contacts[i];
		i++;
	}
	return NULL;
}

void	Contacts::addContact(void) {
	Contact	contact;

	contact.index = current;
	std::cout << "First name: ";
	std::cin >> contact.firstname;
	std::cout << "Last name: ";
	std::cin >> contact.lastname;
	std::cout << "Nick name: ";
	std::cin >> contact.nickname;
	std::cout << "Login: ";
	std::cin >> contact.login;
	std::cout << "Postal address: ";
	std::cin >> contact.postal_address;
	std::cout << "Email address: ";
	std::cin >> contact.email_address;
	std::cout << "Phone number: ";
	std::cin >> contact.phone_number;
	std::cout << "Birthday date: ";
	std::cin >> contact.birthday_date;
	std::cout << "Favorite meal: ";
	std::cin >> contact.favorite_meal;
	std::cout << "Underwear color: ";
	std::cin >> contact.underwear_color;
	std::cout << "Darkest secret: ";
	std::cin >> contact.darkest_secret;
	contacts[current] = contact;
	current++;
	std::cout << "Contact added" << std::endl;
}

void	limit_str(string str, int end) {
	int		size;

	size = str.length();
	if (size > 10)
		std::cout << str.substr(0, 9) << ".";
	else
	{
		size = 10 - size;
		std::cout << str;
		while (size--)
			std::cout << " ";
	}
	if (!end)
		std::cout << "|";
	else
		std::cout << std::endl;
}

void	Contacts::displayContacts(void) {
	Contact	c;
	int		i;

	std::cout << "  index   |first name|last name | nickname " << std::endl;
	std::cout << "----------|----------|----------|----------" << std::endl;
	i = -1;
	while (++i < current)
	{
		c = contacts[i];
		std::cout << c.index << "         |"; 
		limit_str(c.firstname, 0);
		limit_str(c.lastname, 0);
		limit_str(c.nickname, 1);
	}
}

void	Contacts::searchContact(string input) {
	int	i;
	Contact	*contact;
	char	buff[512];

	i = 0;
	while (input[i])
	{
		if (!isdigit(input[i]))
		{
			std::cout << "Error: Index not valid" << std::endl;
			return;
		}
		buff[i] = input[i];
		i++;
	}
	buff[i] = '\0';
	contact = getContact(atoi(buff));
	if (contact)
		contact->displayContact();
	else
		std::cout << "Error: Contact not found!" << std::endl;
} 
