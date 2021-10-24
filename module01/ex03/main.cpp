/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkarmi <melkarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 16:58:53 by melkarmi          #+#    #+#             */
/*   Updated: 2021/10/24 16:06:19 by melkarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


int main ()
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attacks();
    club.setType("some other type of club");
    bob.attacks();
    
    Weapon club2 = Weapon("crude spiked club2");

    HumanB jim("jim");
    jim.setWeapon(club2);
    jim.attacks();
    club2.setType("some other type of club2");
    jim.attacks();

    
    
    return (0);
}