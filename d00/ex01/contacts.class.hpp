#ifndef CONTACTS_CLASS_H
# define CONTACTS_CLASS_H

class Contacts {

private:
	Contact	_contacts[8];
	int		_current;

	Contact	*getContact(int index);

public:
	

	Contacts(void);
	~Contacts(void);


	void	addContact(void);

	void	displayContacts(void);

	void	searchContact(std::string input);

	int		getCurrent(void);

};

#endif
