#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H



class Contact {

public:
	int		full;

	int		index;
	string	firstname;
	string	lastname;
	string	nickname;
	string	login;
	string	postal_address;
	string	email_address;
	string	phone_number;
	string	birthday_date;
	string	favorite_meal;
	string	underwear_color;
	string	darkest_secret;

	Contact(void);
	~Contact(void);

	void	displayContact(void);

};

#endif
