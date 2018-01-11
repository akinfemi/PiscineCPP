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
#include <iomanip>
#include <string>
#include "Contact.hpp"

static std::string read_and_error()
{
    std::string buff;

    std::getline(std::cin, buff);
    if (std::cin.eof())
        exit(1);
    return buff;
}

static std::string read_index()
{
    std::string buff;
    int flag = 0;

    while(1)
    {
        std::cout << "Enter index: ";
        std::getline(std::cin, buff);
        if (std::cin.eof())
            exit(1);
        for (int i = 0; i < 8; i++)
        {
            if (std::to_string(i) == buff)
                flag = 1;
        }
        if (flag == 1)
            return buff;
        std::cout << "Out of range" << std::endl;
    }
}

static Contact new_contact()
{
    Contact contact;
    std::string buff;

    std::cout << "Enter your first name: ";
    buff = read_and_error();
    contact.setFirstName(buff);
    std::cout << "Enter your last name: ";
    buff = read_and_error();
    contact.setLastName(buff);
    std::cout << "Enter your nick name: ";
    buff = read_and_error();
    contact.setNickName(buff);
    std::cout << "Enter your login: ";
    buff = read_and_error();
    contact.setLogin(buff);
    std::cout << "Enter your postal address: ";
    buff = read_and_error();
    contact.setPostalAddress(buff);
    std::cout << "Enter your email address: ";
    buff = read_and_error();
    contact.setEmailAddress(buff);
    std::cout << "Enter your phone number: ";
    buff = read_and_error();
    contact.setPhoneNumber(buff);
    std::cout << "Enter your DOB: ";
    buff = read_and_error();
    contact.setDOB(buff);
    std::cout << "Enter your favorite meal: ";
    buff = read_and_error();
    contact.setFavoriteMeal(buff);
    std::cout << "Enter your underwear color: ";
    buff = read_and_error();
    contact.setUnderwearColor(buff);
    std::cout << "Enter your darkest secret: ";
    buff = read_and_error();
    contact.setDarkestSecret(buff);
    return(contact);
}

static void printTen(std::string str)
{
    int j = (int)str.length();
    if (j <= 10)
    {
        std::cout << std::setw(10);
        std::cout << str;
    }else{
        for (int i = 0; i < 10; i++)
        {
            if (i < (int)str.length() && i != 9)
                std::cout << str[i];
            else
                std::cout << '.';
        }
    }
}

static void get_contact(Contact pb[8], int size)
{
    std::string buff;
    int index;
    
    buff = read_index();
    index = std::stoi(buff);
    if (!(index < size))
        return;
    std::cout << "Index: " << index << std::endl;
    std::cout << "First Name: " << pb[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << pb[index].getLastName() << std::endl;
    std::cout << "Nick Name: " << pb[index].getNickName() << std::endl;
}

static void display_contacts(Contact pb[8], int size)
{
    int     index = 0;

    printTen("Index");
    std::cout << "|";
    printTen("F Name");
    std::cout << "|";
    printTen("L Name");
    std::cout << "|";
    printTen("N Name");
    std::cout << "|";
    std::cout << std::endl;
    while (index < size && index >= 0)
    {
        printTen(std::to_string(index));
        std::cout << "|";
        printTen(pb[index].getFirstName());
        std::cout << "|";
        printTen(pb[index].getLastName());
        std::cout << "|";
        printTen(pb[index].getNickName());
        std::cout << "|";
        std::cout << std::endl;
        index++;
    }
}

int         main(void)
{
    int         status = 1;
    std::string buff;
    Contact     phonebook[8];
    int         i = 0;

    while (status == 1)
    {
        std::cout << "Input a command: ";
        std::getline(std::cin, buff);
        if (std::cin.eof())
            return (1);
        if (buff == "EXIT")
            status = 0;
        else if (buff == "ADD")
        {
            if (i >= 8)
                std::cout << "Phonebook at capacity\n";
            else {
                phonebook[i] = new_contact();
                i++;
            }
        }
        else if (buff == "SEARCH")
        {
            display_contacts(phonebook, i);
            get_contact(phonebook, i);
        }
    }
    return (0);
}