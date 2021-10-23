/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkarmi <melkarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:31:17 by melkarmi          #+#    #+#             */
/*   Updated: 2021/10/23 20:08:31 by melkarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w) : _w(w){
    Name = name;
}  
void    HumanA::attacks(void)
{
    std::string name = Name;
    std::cout << name <<  " attacks with his " << _w.getType() << std::endl;
}

// HumanA::HumanA()
// {

// }
