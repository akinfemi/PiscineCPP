/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akinfemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 20:44:39 by akinfemi          #+#    #+#             */
/*   Updated: 2018/01/10 20:44:41 by akinfemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int     main(void)
{
    Zombie zm("Louis", "Creepy");
    
    ZombieEvent *zm_event = new ZombieEvent;
    zm_event->setZombieType("NotTooCreepy");
    zm_event->randomChump();
    Zombie *zm_heap = zm_event->newZombie("Eliot");
    delete zm_heap;
    
    zm_event->setZombieType("VeryCreepy");
    zm_event->randomChump();
    zm_event->setZombieType("HellaCreepy");
    zm_event->randomChump();
    delete zm_event;

    return (0);
}