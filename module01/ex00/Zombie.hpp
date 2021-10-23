/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkarmi <melkarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 12:37:52 by melkarmi          #+#    #+#             */
/*   Updated: 2021/10/23 14:06:12 by melkarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>


class Zombie {


public:
    void announce();
    ~Zombie();
    Zombie(std::string name);
private:
    std::string Name;
    
};

Zombie *newZombie(std::string name);
void randomChump( std::string name);

#endif