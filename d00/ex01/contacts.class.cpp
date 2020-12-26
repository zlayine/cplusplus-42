
#include "Contacts.class.hpp"

Contacts::Contacts(void) {
	this->_current = 0;
	return;
}

Contacts::~Contacts(void) {
	return ;
}

Contact	*Contacts::getContact(int index) {
	int 	i;

	i = 0;
	while (i < this->_current)
	{
		if (_contacts[i].getIndex() == index)
			return &_contacts[i];
		i++;
	}
	return NULL;
}

void	Contacts::addContact(void) {
	Contact	contact;
	std::string	buff;

	contact.setIndex(this->_current);
	std::cout << "First name: ";
	std::cin >> buff;
	contact.setFirstName(buff);
	std::cout << "Last name: ";
	std::cin >> buff;
	contact.setLastName(buff);
	std::cout << "Nick name: ";
	std::cin >> buff;
	contact.setNickName(buff);
	std::cout << "Login: ";
	std::cin >> buff;
	contact.setLogin(buff);
	std::cout << "Postal addrebuff: ";
	std::cin >> buff;
	contact.setPostalAddress(buff);
	std::cout << "Email addrebuff: ";
	std::cin >> buff;
	contact.setEmailAddress(buff);
	std::cout << "Phone number: ";
	std::cin >> buff;
	contact.setPhoneNumber(buff);
	std::cout << "Birthday date: ";
	std::cin >> buff;
	contact.setBirthdayDate(buff);
	std::cout << "Favorite meal: ";
	std::cin >> buff;
	contact.setFavoriteMeal(buff);
	std::cout << "Underwear color: ";
	std::cin >> buff;
	contact.setUnderwearColor(buff);
	std::cout << "Darkest secret: ";
	std::cin >> buff;
	contact.setDarkestSecret(buff);
	this->_contacts[this->_current] = contact;
	this->_current++;
	std::cout << "Contact added" << std::endl;
}

void	limit_str(std::string str, int end) {
	int		size;

	size = str.length();
	if (size > 10)
		std::cout << str.substr(0, 9) << ".";
	else
	{
		std::cout << std::setw(10);
		std::cout << str;
	}
	if (!end)
		std::cout << "|";
	else
		std::cout << std::endl;
}

void	Contacts::displayContacts(void) {
	Contact	c;
	int		i;
	std::setw(10);
	std::cout << "index     |first name|last name |nickname  " << std::endl;
	std::cout << "----------|----------|----------|----------" << std::endl;
	i = -1;
	while (++i < this->_current)
	{
		c = this->_contacts[i];
		std::cout << std::setw(10);
		std::cout << c.getIndex() << "|"; 
		limit_str(c.getFirstName(), 0);
		limit_str(c.getLastName(), 0);
		limit_str(c.getNickName(), 1);
	}
}

void	Contacts::searchContact(std::string input) {
	int		i;
	Contact	*contact;

	i = 0;
	while (input[i])
	{
		if (!isdigit(input[i]))
		{
			std::cout << "Error: Index not valid" << std::endl;
			return;
		}
		i++;
	}
	contact = this->getContact(std::stoi(input));
	if (contact)
		contact->displayContact();
	else
		std::cout << "Error: Contact not found!" << std::endl;
} 

int		Contacts::getCurrent(void)
{
	return (this->_current);
}