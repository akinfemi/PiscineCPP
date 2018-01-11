/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akinfemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 17:14:12 by akinfemi          #+#    #+#             */
/*   Updated: 2018/01/10 17:14:14 by akinfemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
#define PONY_H

#include <string>

class Pony {
public:
    std::string getName(void);
    std::string getGender(void);
    int getAge(void);
    int getWeight(void);
    void setAge(int age);
    void setWeight(int weight);
    void speak(void);
    Pony(std::string name, std::string gender, int age, int weight);
    ~Pony(void);
private:
    std::string name;
    std::string gender;
    int         age;
    int         weight;
};

#endif