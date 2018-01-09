/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akinfemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 19:31:55 by akinfemi          #+#    #+#             */
/*   Updated: 2018/01/09 11:46:18 by aakin-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"


void    Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void	Contact::setNickName(std::string nickname)
{
	this->nickName = nickname;
}

void	Contact::setLogin(std::string login)
{
	this->login = login;
}

void	Contact::setPostalAddress(std::string postalAddress)
{
	this->postalAddress = postalAddress;
}

void	Contact::setEmailAddress(std::string emailAddress)
{
	this->emailAddress = emailAddress;
}

void	Contact::setPhoneNumber(int phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void	Contact::setDOB(std::string dateOfBirth)
{
	this->dateOfBirth = dateOfBirth;
}

void	Contact::setFavoriteMeal(std::string favoriteMeal)
{
	this->favoriteMeal = favoriteMeal;
}

void	Contact::setUnderwearColor(std::string underwearColor)
{
	this->underwearColor = underwearColor;
}

void	Contact::setSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}


//getters
std::string    Contact::getFirstName()
{
	return this->firstName;
}

std::string	Contact::getLastName()
{
	return this->lastName;
}

std::string	Contact::getNickName()
{
	return this->nickName;
}

std::string	Contact::getLogin()
{
	return this->login;
}

std::string	Contact::getPostalAddress()
{
	return this->postalAddress;
}

std::string	Contact::getEmailAddress()
{
	return this->emailAddress;
}

int	Contact::getPhoneNumber()
{
	return this->phoneNumber;
}

std::string	Contact::getDOB()
{
	return this->dateOfBirth;
}

std::string	Contact::getFavoriteMeal()
{
	return this->favoriteMeal;
}

std::string	Contact::getUnderwearColor()
{
	return this->underwearColor;
}

std::string	Contact::getSecret()
{
	return this->darkestSecret;
}

Contact::Contact(void){
    // std::cout
    return;
}

Contact::~Contact(void){
    return;
}