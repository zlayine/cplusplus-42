#include <ctime> 
#include <string>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	this->_accountIndex = getNbAccounts();
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	return;
}

Account::~Account( void ) {
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	return;
}

int		Account::getNbAccounts(void) {
	return Account::_nbAccounts;
}

int		Account::getTotalAmount(void) {
	return Account::_totalAmount;
}

int		Account::getNbDeposits(void) {
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals(void) {
	return Account::_totalNbWithdrawals;
}

void		Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
	return;
}

void			Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
	return;
}

bool			Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";widthrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused" << std::endl;
		return false;
	}

	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;

	return true;
}

int				Account::checkAmount(void) const {
	return this->_amount;
}

void			Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount  << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

std::string			expand_date(int date) {

	if (date < 10)
		std::cout << "0";
	std::cout << date;
	return "";
}

void			Account::_displayTimestamp(void) {
	time_t t = time(NULL);
	tm* now = localtime(&t);
	std::cout << "["
		<< now->tm_year + 1900
		<< expand_date(now->tm_mon + 1)
		<< expand_date(now->tm_mday) << "_"
		<< expand_date(now->tm_hour)
		<< expand_date(now->tm_min)
		<< expand_date(now->tm_sec) << "]";
}
