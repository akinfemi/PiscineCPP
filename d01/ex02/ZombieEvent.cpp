/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akinfemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 19:55:32 by akinfemi          #+#    #+#             */
/*   Updated: 2018/01/10 19:55:35 by akinfemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
    std::cout << "Constructor called" << std::endl;   
}

ZombieEvent::~ZombieEvent(void)
{
    std::cout << "Destructor called" << std::endl;
}

Zombie      *ZombieEvent::newZombie(std::string name)
{
    Zombie *zm = new Zombie(name, this->type);
    return (zm);
}

void        ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
}

void        ZombieEvent::randomChump(void)
{
    int     i = 0;
    srand(time(NULL));
    std::string z_names[] = {
        "Louis",
        "Ian",
        "Eliot",
        "Sean"
    };
    i = rand() % 4;
    Zombie zm(z_names[i], this->type);
}