/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akinfemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 18:57:33 by akinfemi          #+#    #+#             */
/*   Updated: 2018/01/08 18:57:34 by akinfemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

static void add_contact(list phonebook)
{
    Contact contact;
    std::string buff;
    int number;

    std::cout "Enter your first name: ";
    std::cin >> buff;
    contact.setFirstName(buff);
    std::cout "Enter your last name: ";
    std::cin >> buff;
    contact.setLastName(buff);
    std::cout "Enter your nick name: ";
    std::cin >> buff;
    contact.setNickName(buff);
    std::cout "Enter your login: ";
    std::cin >> buff;
    contact.setLogin(buff);
    std::cout "Enter your postal address: ";
    std::cin >> buff;
    contact.setPostalAddress(buff);
    std::cout "Enter your email address: ";
    std::cin >> buff;
    contact.setEmailAddress(buff);
    std::cout "Enter your phone number: ";
    std::cin >> number;
    contact.setPhoneNumber(number);
    std::cout "Enter your DOB: ";
    std::cin >> buff;
    contact.setDOB(buff);
    std::cout "Enter your favorite meal: ";
    std::cin >> buff;
    contact.setFavoriteMeal(buff);
    std::cout "Enter your underwear color: ";
    std::cin >> buff;
    contact.setUnderwearColor(buff);
    std::cout "Enter your darkest secret: ";
    std::cin >> buff;
    contact.setDarkestSecret(buff);
    phonebook.add(contact);
}

static void get_contact(list phonebook)
{

}

int         main(void)
{
    int     status = 1;
    string  buff;
    list    phonebook;

    while (status == 1)
    {
        std::cout << "Input a command: ";
        std::cin >> buff;
        if (buff.compare("EXIT") == 0)
            status = 0;
        else if (buff.compare("ADD") == 0)
        {
            if (phonebook.size >= 8)
            {
                std::cout << "Phonebook at capacity";
                continue;
            }
            add_contact(phonebook);
        }
        else if (buff.compare("SEARCH") == 0)
        {
            get_contact(phonebook);
        }
    }
    return (0);
}
/*
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string login;
    std::string postalAddress;
    std::string emailAddress;
    int phoneNumber;
    std::string dateOfBirth;
    std::string favoriteMeal;
    std::string underwearColor;
    std::string darkestSecret;