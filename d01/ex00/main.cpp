/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akinfemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 17:14:30 by akinfemi          #+#    #+#             */
/*   Updated: 2018/01/10 17:14:39 by akinfemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void        ponyOnTheHeap(void)
{
    // Pony(std::string name, std::string gender, int age, int weight);
    std::cout << "PonyOnTheHeap called" << std::endl;
    Pony *horse = new Pony("Grace", "F", 2, 120);
    horse->speak();
    delete horse;
    std::cout << "PonyOnTheHeap end" << std::endl;
}

void        ponyOnTheStack(void)
{
    std::cout << "PonyOnTheStack called" << std::endl;
    Pony horse("Grace", "F", 2, 120);
    horse.speak();
    std::cout << "PonyOnTheStack end" << std::endl;
}

int         main(void){
    ponyOnTheHeap();
    ponyOnTheStack();
    return (0);
}