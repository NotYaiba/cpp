#include "Zombie.hpp"
#include <iostream>
#include <string>


Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zobies = new Zombie[N];
    for(int i  = 0 ; i < N ; i++)
    {
        Zombie *z = new Zombie(name + "_" +  std::to_string(i+1));
        zobies[i] = *z;
    }
    return (zobies);
}
