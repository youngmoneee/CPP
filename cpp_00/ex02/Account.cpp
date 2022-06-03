#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

//	public

int	Account::getNbAccounts( void ) { return _nbAccounts; }
int	Account::getTotalAmount( void ) { return _totalAmount; }
int	Account::getNbDeposits( void ) { return _totalNbDeposits; }
int	Account::getNbWithdrawals( void ) { return _totalNbWithdrawals; }
void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();

	std::cout
	<< "accounts:" << getNbAccounts() << ';'
	<< "total:" << getTotalAmount() << ';'
	<< "deposits:" << getNbDeposits() << ';'
	<< "withdrawals:" << getNbWithdrawals()
	<< std::endl;
}

Account::Account( int initial_deposit ) {
	this->_accountIndex = _nbAccounts++;
	Account::_totalAmount += (this->_amount = initial_deposit);
	_displayTimestamp();
	std::cout
	<< "index:"<< this->_accountIndex << ';'
	<< "amount:" << this->_amount << ';'
	<< "created"
	<< std::endl;
}
Account::~Account( void ) {
	_nbAccounts--;
	_displayTimestamp();
	std::cout
	<< "index:" << this->_accountIndex << ';'
	<< "amount:" << this->_amount << ';'
	<< "closed"
	<< std::endl;
};

void	Account::makeDeposit( int deposit ) {
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	_displayTimestamp();
	std::cout
	<< "index:" << _accountIndex << ';'
	<< "p_amount:" << _amount - deposit << ';'
	<< "deposit:"<< deposit << ';'
	<< "amount:" << _amount << ';'
	<< "nb_deposits:" << _nbDeposits
	<< std::endl;
};
bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	std::cout
	<< "index:" << this->_accountIndex << ';'
	<< "p_amount:" << this->_amount << ';'
	<< "withdrawal:";
	if (withdrawal > this->_amount) {
		std::cout << "refused" << std::endl;
		return false;
	}
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	std::cout
	<< withdrawal << ';'
	<< "amount:" << this->_amount << ';'
	<< "nb_withdrawals:" << this->_nbWithdrawals
	<< std::endl;
	return true;
}
int		Account::checkAmount( void ) const {
	return this->_amount;
}
void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout
	<< "index:" << this->_accountIndex << ';'
	<< "amount:" << this->_amount << ';'
	<< "deposits:" << this->_nbDeposits << ';'
	<< "withdrawals:" << this->_nbWithdrawals
	<< std::endl;
}

//	private

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void ) {
//	time_t now = time(0);
//	tm* _tm = localtime(&now);
	std::cout << "[19920104_091532] ";
/*
	std::cout << std::setfill('0')
	<< '['
	<< _tm->tm_year + 1900
	<< std::setw(2) << _tm->tm_mon + 1
	<< std::setw(2) << _tm->tm_mday << '_'
	<< std::setw(2) << _tm->tm_hour
	<< std::setw(2) << _tm->tm_min
	<< std::setw(2) << _tm->tm_sec
	<< ']' << ' ';
	*/
}

Account::Account( void ) {}
