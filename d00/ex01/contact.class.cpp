#include "Contact.class.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

void	Contact::displayContact(void) {
	std::cout << "First name: " << this->_firstname << std::endl;
	std::cout << "Last name: " << this->_lastname << std::endl;
	std::cout << "Nick name: " << this->_nickname << std::endl;
	std::cout << "Login: " << this->_login << std::endl;
	std::cout << "Postal address: " << this->_postal_address << std::endl;
	std::cout << "Email address: " << this->_email_address << std::endl;
	std::cout << "Phone number: " << this->_phone_number << std::endl;
	std::cout << "Birthday date: " << this->_birthday_date << std::endl;
	std::cout << "Favorite meal: " << this->_favorite_meal << std::endl;
	std::cout << "Underwear color: " << this->_underwear_color << std::endl;
	std::cout << "Darkest secret: " << this->_darkest_secret << std::endl;
}

void	Contact::setIndex(int index) {
	this->_index = index;
	return ;
}

int		Contact::getIndex(void) const {
	return this->_index;
}

void	Contact::setFirstName(std::string str) {
	this->_firstname = str;
	return ;
}

std::string	Contact::getFirstName(void) const {
	return this->_firstname;
}

void	Contact::setLastName(std::string str) {
	this->_lastname = str;
	return ;
}

std::string	Contact::getLastName(void) const {
	return this->_lastname;
}

void	Contact::setNickName(std::string str) {
	this->_nickname = str;
	return ;
}

std::string	Contact::getNickName(void) const {
	return this->_nickname;
}

void	Contact::setLogin(std::string str) {
	this->_login = str;
	return ;
}

std::string	Contact::getLogin(void) const {
	return this->_login;
}

void	Contact::setPostalAddress(std::string str) {
	this->_postal_address = str;
	return ;
}

std::string	Contact::getPostalAddress(void) const {
	return this->_postal_address;
}

void	Contact::setEmailAddress(std::string str) {
	this->_email_address = str;
	return ;
}

std::string	Contact::getEmailAddress(void) const {
	return this->_email_address;
}
#include "Contact.class.hpp"

void	Contact::setPhoneNumber(std::string str) {
	this->_phone_number = str;
	return ;
}

std::string	Contact::getPhoneNumber(void) const {
	return this->_phone_number;
}

void	Contact::setBirthdayDate(std::string str) {
	this->_birthday_date = str;
	return ;
}

std::string	Contact::getBirthdayDate(void) const {
	return this->_birthday_date;
}

void	Contact::setFavoriteMeal(std::string str) {
	this->_favorite_meal = str;
	return ;
}

std::string	Contact::getFavoriteMeal(void) const {
	return this->_favorite_meal;
}

void	Contact::setUnderwearColor(std::string str) {
	this->_underwear_color = str;
	return ;
}

std::string	Contact::getUnderWearColor(void) const {
	return this->_underwear_color;
}

void	Contact::setDarkestSecret(std::string str) {
	this->_darkest_secret = str;
	return ;
}

std::string	Contact::getDarkestSecret(void) const {
	return this->_darkest_secret;
}
