#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <sstream>
#include <iomanip>
#include <iostream>
#include <string>

class Contact {

private:
	int			_index;
	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_login;
	std::string	_postal_address;
	std::string	_email_address;
	std::string	_phone_number;
	std::string	_birthday_date;
	std::string	_favorite_meal;
	std::string	_underwear_color;
	std::string	_darkest_secret;
	
public:
	Contact(void);
	~Contact(void);

	void	displayContact(void);

	void		setIndex(int index);
	int			getIndex(void) const;
	void		setFirstName(std::string str);
	std::string	getFirstName(void) const;
	void		setLastName(std::string str);
	std::string	getLastName(void) const;
	void		setNickName(std::string str);
	std::string	getNickName(void) const;
	void		setLogin(std::string str);
	std::string	getLogin(void) const;
	void		setPostalAddress(std::string str);
	std::string	getPostalAddress(void) const;
	void		setEmailAddress(std::string str);
	std::string	getEmailAddress(void) const;
	void		setPhoneNumber(std::string str);
	std::string	getPhoneNumber(void) const;
	void		setBirthdayDate(std::string str);
	std::string	getBirthdayDate(void) const;
	void		setFavoriteMeal(std::string str);
	std::string	getFavoriteMeal(void) const;
	void		setUnderwearColor(std::string str);
	std::string	getUnderWearColor(void) const;
	void		setDarkestSecret(std::string str);
	std::string	getDarkestSecret(void) const;

};

#endif
