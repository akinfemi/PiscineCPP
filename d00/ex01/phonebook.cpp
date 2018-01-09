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
    Contact contct;
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