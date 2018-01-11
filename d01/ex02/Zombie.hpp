/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akinfemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 19:55:01 by akinfemi          #+#    #+#             */
/*   Updated: 2018/01/10 19:55:03 by akinfemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
public:
    Zombie(std::string name, std::string type);
    ~Zombie(void);
    void announce(void);
private:
    std::string name;
    std::string type;
};

#endif