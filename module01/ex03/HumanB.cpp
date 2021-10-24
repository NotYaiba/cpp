/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkarmi <melkarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:29:35 by melkarmi          #+#    #+#             */
/*   Updated: 2021/10/24 16:07:01 by melkarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) 
{
    this->Name = name;
}

void HumanB::setWeapon(Weapon &w)
{
    _w = &w;
}
void    HumanB::attacks(void)
{
    std::string name = Name;
    std::cout << name <<  " attacks with his " << _w->getType() << std::endl;
}
