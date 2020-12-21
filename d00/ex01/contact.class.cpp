#include <iostream>
#include <string>
using namespace std;
#include "contact.class.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

void	Contact::displayContact(void) {
	std::cout << "First name: " << firstname << std::endl;
	std::cout << "Last name: " << lastname << std::endl;
	std::cout << "Nick name: " << nickname << std::endl;
	std::cout << "Login: " << login << std::endl;
	std::cout << "Postal address: " << postal_address << std::endl;
	std::cout << "Email address: " << email_address << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
	std::cout << "Birthday date: " << birthday_date << std::endl;
	std::cout << "Favorite meal: " << favorite_meal << std::endl;
	std::cout << "Underwear color: " << underwear_color << std::endl;
	std::cout << "Darkest secret: " << darkest_secret << std::endl;
}

// void	Contact::setIndex(int index) {
// 	this->index = index;
// 	return ;
// }

// int		Contact::getIndex(void) {
// 	return this->index;
// }

// void	Contact::setFirstName(char *str) {
// 	this->firstname = str;
// 	return ;
// }

// char	*Contact::getFirstName(void) {
// 	return this->firstname;
// }

// void	Contact::setLastName(char *str) {
// 	this->firstname = str;
// 	return ;
// }

// char	*Contact::getLastName(void) {
// 	return this->firstname;
// }

// void	Contact::setNickName(char *str) {
// 	this->firstname = str;
// 	return ;
// }

// char	*Contact::getNickName(void) {
// 	return this->firstname;
// }

// void	Contact::setLogin(char *str) {
// 	this->firstname = str;
// 	return ;
// }

// char	*Contact::getLogin(void) {
// 	return this->firstname;
// }

// void	Contact::setPostalAddress(char *str) {
// 	this->firstname = str;
// 	return ;
// }

// char	*Contact::getPostalAddress(void) {
// 	return this->firstname;
// }

// void	Contact::setEmailAddress(char *str) {
// 	this->firstname = str;
// 	return ;
// }

// char	*Contact::getEmailAddress(void) {
// 	return this->firstname;
// }

// void	Contact::setPhoneNumber(char *str) {
// 	this->firstname = str;
// 	return ;
// }

// char	*Contact::getPhoneNumber(void) {
// 	return this->firstname;
// }

// void	Contact::setBirthdayDate(char *str) {
// 	this->firstname = str;
// 	return ;
// }

// char	*Contact::getBirthdayDate(void) {
// 	return this->firstname;
// }

// void	Contact::setFavoriteMeal(char *str) {
// 	this->firstname = str;
// 	return ;
// }

// char	*Contact::getFavoriteMeal(void) {
// 	return this->firstname;
// }

// void	Contact::setUnderwearColor(char *str) {
// 	this->firstname = str;
// 	return ;
// }

// char	*Contact::getFirstName(void) {
// 	return this->firstname;
// }

// void	Contact::setFirstName(char *str) {
// 	this->firstname = str;
// 	return ;
// }

// char	*Contact::getFirstName(void) {
// 	return this->firstname;
// }

// void	Contact::setFirstName(char *str) {
// 	this->firstname = str;
// 	return ;
// }

// char	*Contact::getFirstName(void) {
// 	return this->firstname;
// }