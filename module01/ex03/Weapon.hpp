#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <iostream>


class Weapon {

public:
std::string    getType();
void            setType(std::string type);
explicit Weapon(std::string type);

    Weapon();
private:
    std::string Type;
};

#endif