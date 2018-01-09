/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akinfemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 19:31:55 by akinfemi          #+#    #+#             */
/*   Updated: 2018/01/09 11:46:16 by aakin-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {

public:
	setFirstName(std::string firstName);
	setLastName(std::string lastName);
	setNickName(std::string nickName);
	setLogin(std::string login);
	setPostalAddress(std::string postalAddress);
	setEmailAddress(std::string emailAddress);
	setPhoneNumber(int phoneNumber);
	setDOB(std::string dateOfBirth);
	setFavoriteMeal(std::string favoriteMeal);
	setUnderwearColor(std::string color);
	setDarkestSecret(std::string secret);
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getLogin();
	std::string getPostalAddress();
	std::string getEmailAddress();
	int getPhoneNumber();
	std::string getDOB();
	std::string getFavoriteMeal();
	std::string getUnderwearColor();
	std::string getDarkestSecret();
    Contact(void);
    ~Contact(void);

private:
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
	std::string	darkestSecret;
};

#endif
