/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akinfemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 18:08:14 by akinfemi          #+#    #+#             */
/*   Updated: 2018/01/08 18:08:15 by akinfemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    ft_toupper(char *str)
{
    int i = 0;

    if (!str)
        return ;
    while (str[i])
    {
        std::cout << (char)(std::toupper(str[i]));
        i++;
    }
}

int     main(int ac, char **ag)
{
    int     i = 1;

    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (i < ac)
    {
        ft_toupper(ag[i]);
        i++;
    }
    std::cout << std::endl;
    return (0);
}