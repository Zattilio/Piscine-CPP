/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:53:53 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/02 16:55:36 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account( int initial_deposit )
{
	static int	first_call = 0;

	if (first_call == 0)
	{
		first_call = 1;
		this->_nbAccounts = 0;
		this->_totalAmount = 0;
		this->_totalNbDeposits = 0;
		this->_totalNbWithdrawals = 0;
	}

	this->_nbAccounts++;
	this->_totalAmount += initial_deposit;

	this->_accountIndex = this->_nbAccounts - 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit;

	this->_totalAmount += deposit;
	this->_totalNbDeposits++;

	this->_amount += deposit;
	this->_nbDeposits++;

	std::cout << ";amount:" << this->_amount << ";nb_deposits:" << _nbDeposits;
}

void	Account::_displayTimestamp(void)
{
	std::cout << "[19920104_091532]";
}

Account::Account( void ) { return ; }

int	Account::getNbAccounts( void ) { return this->_nbAccounts;}
int	Account::getTotalAmount( void ) { return this->_totalAmount;}
int	Account::getNbDeposits( void ) { return this->_totalNbDeposits;}
int	Account::getNbWithdrawals( void ) { return this->_totalNbWithdrawals;}
void	Account::displayAccountsInfos( void ) { return ;}
