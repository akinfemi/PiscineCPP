/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akinfemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 18:28:34 by akinfemi          #+#    #+#             */
/*   Updated: 2018/01/09 18:28:36 by akinfemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

Account::Account(void){

}

Account::Account(int initial_deposit){
    Account::_nbDeposits++;
    Account::_totalAmount += initial_deposit;
    this->_nbDeposits = 0;
    this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbWithdrawals = 0;
    Account::_nbAccounts++;

    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
    << "amount:" << this->_amount << ";"
    << "created" << std::endl;
}

Account::~Account(void){
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
    << "amount:" << this->_amount << ";"
    << "closed" << std::endl;
    return;
}

int Account::getNbAccounts(void){
    return Account::_nbAccounts;
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

void Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";"
    << "total:" << Account::_totalAmount << ";"
    << "deposits:" << Account::_totalNbDeposits << ";"
    << "withdrawals:" << Account::_totalNbWithdrawals
    << std::endl;
}

void    Account::makeDeposit(int deposit)
{

    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
    << "p_amount:" << this->_amount << ";"
    << "deposits:" << deposit << ";";
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    this->_amount += deposit;
    this->_nbDeposits++;
    std::cout << "amount:" << this->_amount << ";"
    << "nb_Deposits:" << this->_nbDeposits
    << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    if (this->_amount >= withdrawal)
    {

        Account::_displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";"
        << "p_amount:" << this->_amount << ";"
        << "withdrawal:" << withdrawal << ";";
        this->_amount -= withdrawal;
        this->_nbWithdrawals++;
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals++;
        std::cout << "amount:" << this->_amount << ";"
        << "nb_withdrawals:" << this->_nbWithdrawals
        << std::endl;
        // index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
        return true;
    }
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
    << "p_amount:" << this->_amount << ";"
    << "withdrawals:refused"
    << std::endl;
    return false;
}

int     Account::checkAmount(void) const {
    return (Account::_totalAmount);
}

void    Account::displayStatus(void) const{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
    << "amount:" << this->_amount << ";"
    << "deposits:" << this->_nbDeposits << ";"
    << "withdrawals:" << this->_nbWithdrawals
    << std::endl;
}

void Account::_displayTimestamp(void)
{
    time_t t = time(0);
    struct tm * now = localtime(&t);
    std::cout << "[" << (now->tm_year + 1900) 
    << std::setw(2) << std::setfill('0') << (now->tm_mon + 1) 
    << std::setw(2) << std::setfill('0') << now->tm_mday << '_' 
    << std::setw(2) << std::setfill('0') << now->tm_hour
    << std::setw(2) << std::setfill('0') << now->tm_min
    << std::setw(2) << std::setfill('0') << now->tm_sec << "] ";
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
