/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkarmi <melkarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 12:37:52 by melkarmi          #+#    #+#             */
/*   Updated: 2021/10/23 14:33:33 by melkarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>


class Zombie {


public:
    void announce();
    ~Zombie();
    explicit Zombie(std::string name);
    Zombie();
private:
    std::string Name;

    
};
Zombie* zombieHorde( int N, std::string name );
#endif