/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akinfemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 17:14:03 by akinfemi          #+#    #+#             */
/*   Updated: 2018/01/10 17:14:05 by akinfemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

std::string name;
std::string gender;
int         age;
int         weight;

Pony::Pony(std::string name, std::string gender, int age, int weight)
{
    this->name = name;
    this->gender = gender;
    this->age = age;
    this->weight = weight;
    std::cout << "Constructor called" << std::endl;
}

Pony::~Pony(void) {
    std::cout << "Destructor called" << std::endl;
}

void Pony::speak(void)
{
    std::cout << "My name is " << this->name << ", no you're not crazy I really can speak." << std::endl;
}

std::string     Pony::getName(void){
    return this->name;
}

std::string     Pony::getGender(void){
    return this->gender;
}

int             Pony::getAge(void){
    return this->age;
}

int             Pony::getWeight(void){
    return this->weight;
}

void           Pony::setAge(int age){
    this->age = age;
}

void           Pony::setWeight(int weight){
    this->weight = weight;
}