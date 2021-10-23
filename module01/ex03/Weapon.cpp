#include "Weapon.hpp"

std::string Weapon::getType(void)
{
    return (this->Type);
}

void        Weapon::setType(std::string type)
{
    this->Type = type;
}

Weapon::Weapon(std::string type)
{
    this->Type = type;
}

Weapon::Weapon()
{
    
}
