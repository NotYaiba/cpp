#ifndef __HumanA_H__
#define __HumanA_H__

#include <iostream>
#include "Weapon.hpp"


class HumanA {

public:
    void    attacks();
     HumanA(std::string   name, Weapon &w);
private:
    std::string Name;
    Weapon &_w;
};

#endif