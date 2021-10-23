/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkarmi <melkarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 12:38:46 by melkarmi          #+#    #+#             */
/*   Updated: 2021/10/23 15:25:26 by melkarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void   announceZombies(int size, Zombie *zobies)
{
    for (int i = 0 ; i < size ; i++)
        zobies[i].announce();
}

Zombie* zombieHorde( int N, std::string name );
int main()
{
    int size= 5;
    std::cout << "program runiing" << std::endl;
    Zombie *zobies = zombieHorde(size, "yaiba");
    announceZombies(size, zobies);
    delete[] zobies;
     return (0);
}