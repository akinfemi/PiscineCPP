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
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setNickName(std::string nickName);
	void setLogin(std::string login);
	void setPostalAddress(std::string postalAddress);
	void setEmailAddress(std::string emailAddress);
	void setPhoneNumber(std::string phoneNumber);
	void setDOB(std::string dateOfBirth);
	void setFavoriteMeal(std::string favoriteMeal);
	void setUnderwearColor(std::string color);
	void setDarkestSecret(std::string secret);
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getLogin();
	std::string getPostalAddress();
	std::string getEmailAddress();
	std::string getPhoneNumber();
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
	std::string phoneNumber;
	std::string dateOfBirth;
	std::string favoriteMeal;
	std::string underwearColor;
	std::string	darkestSecret;
};

#endif
