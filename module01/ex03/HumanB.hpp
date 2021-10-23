#ifndef __HumanB_H__
#define __HumanB_H__

#include <iostream>
#include "Weapon.hpp"


class HumanB {

public:
    void    attacks();
    void setWeapon(Weapon w);
    HumanB(std::string name);
private:
    std::string Name;
    Weapon *_w;
};

#endif