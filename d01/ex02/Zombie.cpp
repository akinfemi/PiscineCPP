/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akinfemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 19:54:43 by akinfemi          #+#    #+#             */
/*   Updated: 2018/01/10 19:54:45 by akinfemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string name;
std::string type;

Zombie::Zombie(std::string name, std::string type)
{
    std::cout << "Constructor called." << std::endl;
    this->name = name;
    this->type = type;
    this->announce();
}

void        Zombie::announce(void)
{
    std::cout << "<" << this->name << "("
    << this->type << ")> Braiiiiiinnnnssss..." << std::endl;
}

Zombie::~Zombie(void){
    std::cout << "Destructor called" << std::endl;
}