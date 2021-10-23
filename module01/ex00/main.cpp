/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkarmi <melkarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 12:38:46 by melkarmi          #+#    #+#             */
/*   Updated: 2021/10/23 14:05:22 by melkarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
    Zombie *newZombie(std::string name);

int main()
{
    std::cout << "program runiing" << std::endl;
    Zombie z1("reda");
    z1.announce();
    Zombie *z2 = newZombie("yaiba");
    z2->announce();
    randomChump("achraf");
     delete z2;
     return (0);
}