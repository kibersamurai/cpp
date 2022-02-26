/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:36:08 by bprovolo          #+#    #+#             */
/*   Updated: 2022/02/24 21:01:19 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>
/* initial. static variable */
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/* getter - получение данных*/

int	Account::getNbAccounts( void ) 
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ) 
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void ) 
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals( void ) 
{
	return (Account::_totalNbWithdrawals);
}

/* constructor */
Account::Account(int initial_deposit) 
{
	Account::_displayTimestamp();
	Account::_totalAmount += initial_deposit;
	this->_accountIndex = Account::_nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;	
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
}


/* destructor */
Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed\n";
}

void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts;
	std::cout << ";total:" << Account::_totalAmount;
	std::cout << ";deposits:" << Account::_totalNbDeposits;
	std::cout << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	std::cout << ";amount:" << this->_amount;
	this->_nbDeposits++;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";withdrawal:";
	if (this->_amount >= withdrawal) {
		std::cout << withdrawal;
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		std::cout << ";amount:" << this->_amount;
		Account::_totalNbWithdrawals++;
		std::cout << ";nb_withdrawals:" << ++this->_nbWithdrawals << std::endl;
		return (true);
	}
	std::cout << "refused\n";
	return (false);
}

void	Account::_displayTimestamp( void )
{
	std::time_t t = std::time(nullptr);
	std::tm tm = *std::localtime(&t);
	std::cout << std::put_time(&tm, "[%Y%m%d_%H%M%S] ");
}
