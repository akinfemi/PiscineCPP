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

// Account(void){

// }
Account::Account(int initial_deposit){
    Account::_nbDeposits++;
    Account::_totalAmount += initial_deposit;
    this->_nbDeposits = 1;
    this->_accountIndex = 0;
	this->_amount = initial_deposit;
	this->_nbWithdrawals = 0;
}

Account::~Account(void){
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

}

void    Account::makeDeposit(int deposit)
{
    Account::_totalAmount += deposit;
    this->_totalAmount += deposit;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    if (this->_totalAmount >= withdrawal)
    {
        this->_totalAmount -= withdrawal;
        this->_nbWithdrawals++;
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals++;
        return true;
    }
    return false;
}

int     Account::checkAmount(void) const {
    return (Account::_totalAmount);
}

void    Account::displayStatus(void) const{
    
}

void Account::_displayTimestamp(void)
{

}

int	_nbAccounts = 0;
int	_totalAmount = 0;
int	_totalNbDeposits = 0;
int	_totalNbWithdrawals = 0;
