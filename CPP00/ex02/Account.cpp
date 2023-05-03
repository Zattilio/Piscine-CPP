/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlanza <jlanza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:53:53 by jlanza            #+#    #+#             */
/*   Updated: 2023/05/03 14:51:57 by jlanza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) { return _nbAccounts; }
int Account::getTotalAmount(void) { return _totalAmount; }
int Account::getNbDeposits(void) { return _totalNbDeposits; }
int Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }

Account::Account(int initial_deposit)
{
	static int first_call = 0;

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
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
	return;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;

	this->_totalAmount += deposit;
	this->_totalNbDeposits++;

	this->_amount += deposit;
	this->_nbDeposits++;

	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";withdrawal:";
	if (this->_amount - withdrawal < 0)
	{
		std::cout << "refused" << std::endl;
		return 1;
	}

	this->_totalAmount -= withdrawal;
	this->_totalNbWithdrawals++;

	this->_amount -= withdrawal;
	this->_nbWithdrawals++;

	std::cout << withdrawal << ";amount:" << this->_amount;
	std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return 0;
}

int Account::checkAmount(void) const
{
	return this->_amount;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
	return;
}

void Account::_displayTimestamp(void)
{
	std::cout << "[19920104_091532]";
}

// void Account::_displayTimestamp(void)
// {
// 	time_t rawtime;
// 	struct tm *timeinfo;

// 	time(&rawtime);
// 	timeinfo = localtime(&rawtime);
// 	std::cout << "[" << timeinfo->tm_year + 1900;
// 	if (timeinfo->tm_mon < 9)
// 		std::cout << "0";
// 	std::cout << timeinfo->tm_mon + 1 << timeinfo->tm_mday << "_"
// 			  << timeinfo->tm_hour << timeinfo->tm_min << timeinfo->tm_sec << "] ";
// }

Account::Account(void) { return; }
