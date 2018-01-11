/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akinfemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 19:55:49 by akinfemi          #+#    #+#             */
/*   Updated: 2018/01/10 19:55:51 by akinfemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
class   ZombieEvent{
public:
    ZombieEvent(void);
    ~ZombieEvent(void);
    Zombie *newZombie(std::string name);
    void setZombieType(std::string type);
    void randomChump(void);
private:
    std::string type;
};

#endif