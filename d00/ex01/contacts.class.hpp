#ifndef CONTACTS_CLASS_H
# define CONTACTS_CLASS_H

class Contacts {

public:
	Contact	contacts[8];
	int		current;

	Contacts(void);
	~Contacts(void);

	Contact	*getContact(int index);

	void	addContact(void);

	void	displayContacts(void);


	void	searchContact(string input);

};


#endif