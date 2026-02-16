/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:44:48 by rghazary          #+#    #+#             */
/*   Updated: 2025/07/30 14:44:50 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

void	print(std::string str, int value)
{
	std::cout << str << "\033[32m	" << value << "\033[0m;	 ";
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	 _displayTimestamp();
	print("index:", _accountIndex);
	print("amount:", _amount);
	std::cout << "created" << std::endl;
}

Account::~Account()
{
	_nbAccounts--;
	_totalAmount -= _amount;
	 _displayTimestamp();
	print("index:", _accountIndex);
	print("amount:", _amount);
	std::cout << "closed" << std::endl;
}

int Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
	print("accounts:", _nbAccounts);
	print("total:	", _totalAmount);
	print("deposits:", _totalNbDeposits);
	print("withdrawals:", _totalNbWithdrawals);
    std::cout << std::endl;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();

	print("index:", _accountIndex);
	print("p_amount:", _amount);
	print("deposit:", deposit);
	
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;

    print("amount:", _amount);
	print("nb_deposits:", _nbDeposits);
    std::cout << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();

	print("index:", _accountIndex);
	print("p_amount:", _amount);
	print("withdrawal:", withdrawal);
    
    if (_amount >= withdrawal)
	{
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        
		print("amount:", _amount);
		print("nb_withdrawals:", _nbWithdrawals);
        std::cout << std::endl;
        return true;
    }
    
    std::cout << "withdrawal:refused" << std::endl;
    return false;
}

int Account::checkAmount(void) const
{
	return this->_amount;
}

void Account::displayStatus() const
{
    _displayTimestamp();

	print("index:", _accountIndex);
	print("amount:", _amount);
	print("deposits:", _nbDeposits);
	print("withdrawals:", _nbWithdrawals);

    std::cout << std::endl;
}
void Account::_displayTimestamp()
{
    std::time_t now = std::time(0);
    std::tm *ltm = std::localtime(&now);
    
    std::cout << "[";
    std::cout << 1900 + ltm->tm_year;
    std::cout << (ltm->tm_mon < 9 ? "0" : "") << ltm->tm_mon + 1;
    std::cout << (ltm->tm_mday < 10 ? "0" : "") << ltm->tm_mday << "_";
    std::cout << (ltm->tm_hour < 10 ? "0" : "") << ltm->tm_hour;
    std::cout << (ltm->tm_min < 10 ? "0" : "") << ltm->tm_min;
    std::cout << (ltm->tm_sec < 10 ? "0" : "") << ltm->tm_sec;
    std::cout << "] ";
}
