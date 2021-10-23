
#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    std::cout << "zombie consructor is called"<< std::endl;
    Name = name;
}
Zombie::~Zombie()
{
    std::cout << Name <<" is gone"<< std::endl;
}
void Zombie::announce()
{
    std::cout << Name <<" braiiiiiiinz"<< std::endl;
}